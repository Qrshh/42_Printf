/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesneux <abesneux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:12:34 by abesneux          #+#    #+#             */
/*   Updated: 2023/10/28 22:21:52 by abesneux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(int str)
{
	write(1, &str, 1);
	return (1);
}

int	ft_print_string(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		ft_put_str("(null)");
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_print_nbr(int nbr)
{
	int		len;
	char	*convers;

	len = 0;
	convers = ft_itoa(nbr);
	len = ft_print_string(convers);
	free(convers);
	return (len);
}

int	ft_print_percent(void)
{
	write(1, "%", 1);
	return (1);
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	len;

	len = 0;
	if (!ptr)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	len += write(1, "0x", 2);
	if (ptr == 0)
		len += write(1, "0", 1);
	else
	{
		ft_put_ptr(ptr);
		len += ft_printf_len_long(ptr);
	}
	return (len);
}
