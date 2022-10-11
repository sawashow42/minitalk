/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsawaki <shsawaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 19:57:36 by shsawaki          #+#    #+#             */
/*   Updated: 2022/08/02 18:59:54 by shsawaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest2;
	char	*src2;
	size_t	i;

	dest2 = (char *)dest;
	src2 = (char *)src;
	i = 0;
	if (src2 < dest2)
	{
		while (n-- > 0)
			dest2[n] = src2[n];
	}
	else
	{
		while (i < n)
		{
			dest2[i] = src2[i];
			i++;
		}
	}
	return (dest);
}

// int main()
// {
// 	char	d1[] = "     ", d2[] = "     ";
// 	const char s1[] = "12345", s2[] = "12345";
// 	size_t n = 3;
// 	ft_memmove(d1, s1, n);
// 	memmove(d2, s2, n);
// 	printf("%s\n%s\n", d1, d2);
// 	return 0;
// }