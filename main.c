/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesneux <abesneux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:30:49 by abesneux          #+#    #+#             */
/*   Updated: 2023/10/28 22:21:48 by abesneux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	main(void)
{
	char			*string;
	char			c;
	int				nbr;
	unsigned int	nbr2;

	c = 'A';
	string = "Salut !";
	nbr = 15478416;
	nbr2 = 4294967295;
	printf("%s\n", "Test de ma fonction ");
	// ft_printf("%s", string);
	// ft_printf("%c", c);
	// ft_printf("%i", nbr);
	// ft_printf("%d", nbr);
	// ft_printf("%p", &nbr);
	// ft_printf("%u", nbr2);
	// ft_printf("%%");
	ft_printf("%X", nbr);
	printf("%s\n", "  ");
	printf("%s\n", "fonction de base : ");
	printf("%s", string);
	printf("%c", c);
	printf("%i", nbr);
	printf("%d", nbr);
	printf("%%\n");
	printf("%p\n", &nbr);
	printf("%u\n", nbr2);
	printf("%X", nbr);
}
