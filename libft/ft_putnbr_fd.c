/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsawaki <shsawaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 02:54:00 by shsawaki          #+#    #+#             */
/*   Updated: 2022/08/22 05:31:00 by shsawaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		rem;
	char	num[11];
	int		i;
	int		sign;

	sign = 1;
	if (n < 0)
	{
		sign *= -1;
		ft_putchar_fd('-', fd);
	}
	i = 10;
	while (n >= 10 || n < -9)
	{
		rem = n % 10 * sign + 48;
		n = n / 10;
		num[i--] = rem;
	}
	num[i] = n * sign + 48;
	while (i < 11)
		ft_putchar_fd(num[i++], fd);
}

// int	main(void)
// {
// 	ft_putnbr_fd(-2147483648, 1);
// }
