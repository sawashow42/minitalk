/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proce_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsawaki <shsawaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 03:11:29 by shsawaki          #+#    #+#             */
/*   Updated: 2022/08/25 06:31:59 by shsawaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_nbr_len(int n)
{
	int	len;

	len = 1;
	if (n == INT_MIN)
	{
		len = 11;
		return (len);
	}
	if (n < 0)
	{
		len++;
		n = n * -1;
	}
	while (n >= 10)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

int	ft_putnbr(int n)
{
	int		size;

	size = ft_nbr_len(n);
	if (n == INT_MIN)
	{
		write(1, "-2147483648", size);
		return (size);
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + 48);
	return (size);
}

int	ft_uns_putnbr(unsigned int n)
{
	int		rem;
	char	num[10];
	int		i;
	int		size;

	size = 1;
	i = 9;
	while (n >= 10)
	{
		rem = n % 10 + 48;
		n = n / 10;
		num[i] = rem;
		i--;
		size++;
	}
	num[i] = n + 48;
	while (i < 10)
	{
		ft_putchar(num[i]);
		i++;
	}
	return (size);
}
