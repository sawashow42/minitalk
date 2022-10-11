/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsawaki <shsawaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 03:50:32 by shsawaki          #+#    #+#             */
/*   Updated: 2022/07/30 18:11:31 by shsawaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*str == (unsigned char)c)
			return (str);
		str++;
		i++;
	}
	return (NULL);
}

// int main(){
// 	const char s[] = "12345";
// 	int	c = '4';
// 	size_t n = 3;
// 	char *ch;

// 	ch = (char *)ft_memchr(s, c, n);
// 	if (ch != NULL)
// 		printf("%s\n", ch);
// 	else
// 		printf("一致なし\n");
// 	return 0;
// }
