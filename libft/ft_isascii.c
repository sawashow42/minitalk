/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsawaki <shsawaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 03:16:31 by shsawaki          #+#    #+#             */
/*   Updated: 2022/07/08 03:35:43 by shsawaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// #include <stdio.h>
// int main(void){
// 	int c1 = 'a', c2 = '1', c3 = "あ", a1, a2, a3;
// 	a1 = ft_isascii(c1);
// 	a2 = ft_isascii(c2);
// 	a3 = ft_isascii(c3);
// 	printf("%d,%d,%d", a1, a2, a3);
// 	return 0;
// }