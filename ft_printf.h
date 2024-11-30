/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmasnao <abmasnao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 11:25:17 by abmasnao          #+#    #+#             */
/*   Updated: 2024/11/21 12:55:31 by abmasnao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
void	check_specifier(const char **format, int *count, va_list list);
int		ft_putstr(char *str);
int		ft_putchar(char c);
int		ft_hex_addr(void *p);
int		ft_putnbr(int n);
int		ft_putun(unsigned int n);
int		ft_low_hex(unsigned int hex);
int		ft_up_hex(unsigned int hex);

#endif