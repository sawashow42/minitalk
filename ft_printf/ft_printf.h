/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsawaki <shsawaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:51:23 by shsawaki          #+#    #+#             */
/*   Updated: 2022/08/25 06:30:59 by shsawaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(int c);
size_t	ft_strlen(const char *str);
int		ft_putstr(const char *s);
int		ft_judge(va_list arg, char format);
int		ft_putnbr(int n);
int		ft_uns_putnbr(unsigned int n);
int		ft_hexa_lower(unsigned int n);
int		ft_hexa_upper(unsigned int n);
int		ft_point_hexa(unsigned long long p);

#endif
