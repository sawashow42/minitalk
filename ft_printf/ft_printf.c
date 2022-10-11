/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsawaki <shsawaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 00:14:08 by shsawaki          #+#    #+#             */
/*   Updated: 2022/09/16 11:31:19 by shsawaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

int	ft_putstr(const char *s)
{
	size_t	len;

	if (!s)
		s = "(null)";
	len = ft_strlen(s);
	write(1, s, len);
	return (len);
}

int	ft_judge(va_list arg, char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_putchar(va_arg(arg, int));
	else if (format == '%')
		len += ft_putchar('%');
	else if (format == 's')
		len += ft_putstr(va_arg(arg, const char *));
	else if (format == 'p')
		len += ft_point_hexa(va_arg(arg, unsigned long long));
	else if (format == 'd' || format == 'i')
		len += ft_putnbr(va_arg(arg, int));
	else if (format == 'u')
		len += ft_uns_putnbr(va_arg(arg, unsigned int));
	else if (format == 'x')
		len += ft_hexa_lower(va_arg(arg, unsigned int));
	else if (format == 'X')
		len += ft_hexa_upper(va_arg(arg, unsigned int));
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	size_t	done;
	int		tmp;

	done = 0;
	tmp = 0;
	va_start(arg, format);
	while (format[tmp] && done <= INT_MAX)
	{
		if (format[tmp] == '%')
		{
			tmp++;
			done += ft_judge(arg, format[tmp]);
		}
		else
			done += ft_putchar(format[tmp]);
		tmp++;
	}
	va_end(arg);
	return (done);
}

// #include <stdio.h>
// #include <limits.h>
// int main()
// {
// 	int n = INT_MAX, m = INT_MIN;
// 	unsigned int l = UINT_MAX;
// 	ft_printf("%d\n%d\n", n, m);
// 	printf("%d\n%d\n", n, m);
// 	ft_printf("%u\n", l);
// 	printf("%u\n", l);
// 	ft_printf("%%\n");
// 	printf("%%\n");
// 	ft_printf("\t");
// 	printf("\t");
// 	ft_printf("%c%c%c\n", 'a', 'b', 'c');
// 	return 0;
// }
