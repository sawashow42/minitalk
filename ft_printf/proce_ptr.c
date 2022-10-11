/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proce_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsawaki <shsawaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 03:11:58 by shsawaki          #+#    #+#             */
/*   Updated: 2022/08/25 06:31:54 by shsawaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_ptr_len(unsigned long long n)
{
	int	len;

	len = 1;
	while (n >= 16)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

static int	ft_put_p(unsigned long long n)
{
	int		len;

	len = ft_ptr_len(n);
	if (n >= 16)
	{
		ft_put_p(n / 16);
		ft_put_p(n % 16);
	}
	else
	{
		if (n >= 10)
			ft_putchar(n % 10 + 97);
		else
			ft_putchar(n + 48);
	}
	return (len);
}

int	ft_point_hexa(unsigned long long p)
{
	int	len;

	len = 0;
	len += write(1, "0x", 2);
	if (p == 0)
		len += write(1, "0", 1);
	else
		len += ft_put_p(p);
	return (len);
}
