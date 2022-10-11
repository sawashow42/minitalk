/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsawaki <shsawaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 00:19:40 by shsawaki          #+#    #+#             */
/*   Updated: 2022/08/22 05:55:21 by shsawaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	count;
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	if (!dest && src && size == 0)
		return (ft_strlen(src));
	count = 0;
	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	while (dest[count])
		count++;
	while (src[i] && (count < size - 1 && size != 0))
		dest[count++] = src[i++];
	dest[count] = '\0';
	if (size >= dest_len)
		return (dest_len + src_len);
	else
		return (src_len + size);
}

// int	main(void)
// {
// 	char dest[] = "hello";
// 	char src[] = ",worldddddd";
// 	char ans;

// 	ans = ft_strlcat(dest, src, 15);
// 	printf("%d\n", ans);
// 	printf("%s\n", dest);
// }