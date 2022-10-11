/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsawaki <shsawaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 02:53:08 by shsawaki          #+#    #+#             */
/*   Updated: 2022/07/08 03:40:28 by shsawaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	c1 = '1', c2 = 'a', a1, a2;
// 	a1 = ft_isdigit(c1);
// 	a2 = ft_isdigit(c2);
// 	printf("%d,%d", a1, a2);
// 	return 0;
// }