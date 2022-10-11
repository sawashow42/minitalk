/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsawaki <shsawaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 02:23:26 by shsawaki          #+#    #+#             */
/*   Updated: 2022/08/22 04:22:50 by shsawaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z' ) || ('A' <= c && c <= 'Z'))
		return (1);
	return (0);
}

//#include <stdio.h>
// int	main(void)
// {
// 	int	c1 = 'a';
// 	int	c2 = 'A';
// 	int	c3 = 1;
// 	int	a1, a2, a3;
// 	a1 = ft_isalpha(c1);
// 	a2 = ft_isalpha(c2);
// 	a3 = ft_isalpha(c3);
// 	printf("%d,%d,%d\n", a1, a2 ,a3);
// 	return 0;
// }