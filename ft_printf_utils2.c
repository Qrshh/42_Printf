/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesneux <abesneux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 19:21:02 by abesneux          #+#    #+#             */
/*   Updated: 2023/10/28 22:21:44 by abesneux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int nbr)
{
	int		len;
	char	*resultat;

	len = 0;
	if (!nbr)
		len += write(1, "0", 1);
	else
	{
		resultat = ft_itoa_unsigned(nbr);
		len += ft_print_string(resultat);
		free(resultat);
	}
	return (len);
}

static int	ft_num_len(unsigned int nbr)
{
	int	len;

	len = 0;
	while (nbr != 0)
	{
		len++;
		nbr /= 10;
	}
	return (len);
}

char	*ft_itoa_unsigned(unsigned int nbr)
{
	int		len;
	char	*resultat;

	len = ft_num_len(nbr);
	resultat = malloc(sizeof(char) * (len + 1));
	if (!resultat)
		return (NULL);
	resultat[len] = '\0';
	while (nbr != 0)
	{
		resultat[len - 1] = (nbr % 10) + 48;
		nbr /= 10;
		len--;
	}
	return (resultat);
}

int	ft_print_hexa(unsigned int nbr, const char format)
{
	if (nbr == 0)
		return (write(1, "0", 1));
	else
		ft_put_hexa(nbr, format);
	return (ft_printf_len_int(nbr));
}
