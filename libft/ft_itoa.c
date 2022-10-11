/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsawaki <shsawaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 05:10:42 by shsawaki          #+#    #+#             */
/*   Updated: 2022/08/22 07:15:25 by shsawaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	get_nlen(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		nsize;
	int		n2;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	n2 = n;
	nsize = get_nlen(n);
	str = (char *)malloc(sizeof(char) * (nsize + 1));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n2 *= -1;
	}
	str[nsize--] = 0;
	if (n2 == 0)
		str[0] = '0';
	while (n2)
	{
		str[nsize--] = n2 % 10 + '0';
		n2 = n2 / 10;
	}
	return (str);
}

// #include <stdio.h>

// int main()
// {
// 	int n = -2147483648;
// 	char *num;
// 	num = ft_itoa(n);
// 	printf("%s\n", num);
// 	return 0;
// }