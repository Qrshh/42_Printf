/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_functions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesneux <abesneux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:24:31 by abesneux          #+#    #+#             */
/*   Updated: 2023/10/28 22:21:37 by abesneux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_printf_len_long(unsigned long long nbr)
{
	int	len;

	len = 0;
	while (nbr != 0)
	{
		len++;
		nbr /= 16;
	}
	return (len);
}

int	ft_printf_len_int(unsigned int nbr)
{
	int	len;

	len = 0;
	while (nbr != 0)
	{
		len++;
		nbr /= 16;
	}
	return (len);
}

void	ft_put_ptr(unsigned long long nbr)
{
	if (nbr >= 16)
	{
		ft_put_ptr(nbr / 16);
		ft_put_ptr(nbr % 16);
	}
	else
	{
		if (nbr <= 9)
			ft_print_char(nbr + '0');
		else
			ft_print_char(nbr - 10 + 'a');
	}
}

void	ft_put_hexa(unsigned int nbr, const char format)
{
	if (nbr >= 16)
	{
		ft_put_hexa(nbr / 16, format);
		ft_put_hexa(nbr % 16, format);
	}
	else
	{
		if (nbr <= 9)
			ft_print_char(nbr + '0');
		else
		{
			if (format == 'x')
				ft_print_char(nbr - 10 + 'a');
			else if (format == 'X')
				ft_print_char(nbr - 10 + 'A');
		}
	}
}
