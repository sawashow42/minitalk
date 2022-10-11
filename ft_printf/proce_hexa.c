/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proce_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsawaki <shsawaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 03:09:40 by shsawaki          #+#    #+#             */
/*   Updated: 2022/08/25 06:31:58 by shsawaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hexa_len(unsigned int n)
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

int	ft_hexa_lower(unsigned int n)
{
	int	len;

	len = ft_hexa_len(n);
	if (n >= 16)
	{
		ft_hexa_lower(n / 16);
		ft_hexa_lower(n % 16);
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

int	ft_hexa_upper(unsigned int n)
{
	int	len;

	len = ft_hexa_len(n);
	if (n >= 16)
	{
		ft_hexa_upper(n / 16);
		ft_hexa_upper(n % 16);
	}
	else
	{
		if (n >= 10)
			ft_putchar(n % 10 + 65);
		else
			ft_putchar(n + 48);
	}
	return (len);
}
