/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsawaki <shsawaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 03:46:08 by shsawaki          #+#    #+#             */
/*   Updated: 2022/08/22 05:24:26 by shsawaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;

	str = (char *)s;
	while (n-- != 0)
		*str++ = (char)c;
	return (s);
}

// int main(void)
// {
// 	char buf1[] = "abcdefjhijk";
// 	char buf2[] = "abcdefjhijk";

// 	ft_memset(buf1 + 2, '1', 3);
// 	memset(buf2 + 2, '1', 3);
// 	printf("%s\n%s\n", buf1, buf2);

// 	return 0;
// }