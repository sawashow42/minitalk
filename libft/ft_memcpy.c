/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsawaki <shsawaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 01:14:16 by shsawaki          #+#    #+#             */
/*   Updated: 2022/08/22 05:21:19 by shsawaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dest2;
	char	*src2;

	dest2 = (char *)dest;
	src2 = (char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (n-- != 0)
		*dest2++ = *src2++;
	return (dest);
}

// int	main()
// {
// 	char dest[] = "abcdefu";
// 	char src[] = "1234567";
// 	char dest2[] = "abcdefu";
// 	char src2[] = "1234567";
// 	size_t n= 3;

// 	ft_memcpy(dest, src, n);
// 	memcpy(dest2, src2, n);
// 	printf("%s\n%s\n", dest, dest2);
// 	return (0);
// }