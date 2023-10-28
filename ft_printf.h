/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesneux <abesneux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 20:51:36 by abesneux          #+#    #+#             */
/*   Updated: 2023/10/28 22:20:57 by abesneux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_format(va_list args, const char format);
int		ft_printf(const char *format, ...);
int		ft_print_char(int str);
int		ft_print_string(char *str);
void	ft_put_str(char *str);
char	*ft_itoa(int n);
int		ft_print_nbr(int nbr);
int		ft_print_percent(void);
int		ft_print_ptr(unsigned long long ptr);
int		ft_printf_len_long(unsigned long long nbr);
int		ft_printf_len_int(unsigned int nbr);
void	ft_put_ptr(unsigned long long nbr);
int		ft_print_unsigned(unsigned int nbr);
char	*ft_itoa_unsigned(unsigned int nbr);
int		ft_print_hexa(unsigned int nbr, const char format);
void	ft_put_hexa(unsigned int nbr, const char format);

#endif
