/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsawaki <shsawaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:27:20 by shsawaki          #+#    #+#             */
/*   Updated: 2022/08/26 20:55:27 by shsawaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_over_long(long num, int minus, const char str)
{
	if (num > LONG_MAX / 10 && !(minus))
		return (1);
	if (num == LONG_MAX / 10 && str - '0' >= LONG_MAX % 10 && !(minus))
		return (1);
	if (num > LONG_MIN / 10 * -1 && minus)
		return (1);
	if ((num == LONG_MIN / 10 * -1) && \
		(str - '0' >= LONG_MIN % 10 * -1) && minus)
		return (1);
	return (0);
}

static int	ft_isspace(char s)
{
	if (s == ' ' || s == '\t' || s == '\n'
		|| s == '\v' || s == '\f' || s == '\r')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		i;
	long	num;
	int		sign;

	i = 0;
	num = 0;
	sign = 1;
	while (str[i] != '\0' && ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && ft_isdigit(str[i]))
	{
		if (check_over_long(num, sign, str[i]) && sign == 1)
			return ((int)(LONG_MAX));
		if (check_over_long(num, sign, str[i]) && sign == -1)
			return ((int)(LONG_MIN));
		num = num * 10 + str[i] - '0';
		i++;
	}
	return (num * sign);
}
