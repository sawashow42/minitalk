/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsawaki <shsawaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 00:27:35 by shsawaki          #+#    #+#             */
/*   Updated: 2022/08/22 04:18:41 by shsawaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*tmp;

	tmp = (char *)s;
	while (n-- != 0)
		*tmp++ = 0;
}

// int main()
// {
// 	char s[] = "abcdefu";
// 	size_t n = 3;
// 	bzero(s, n);
// 	printf("%s\n", s);
// 	return 0;
// }