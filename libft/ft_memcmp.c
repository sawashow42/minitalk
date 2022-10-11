/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsawaki <shsawaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 04:16:40 by shsawaki          #+#    #+#             */
/*   Updated: 2022/07/30 18:11:59 by shsawaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*c1;
	unsigned char	*c2;
	size_t			i;

	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (c1[i] != c2[i])
			return (c1[i] - c2[i]);
		i++;
	}
	return (0);
}

// int main()
// {
// 	char s1[]="23456",s2[]="12345",s3[]="34567",s4[]="23456";
// 	int	a,b,c,n=3;

// 	a = ft_memcmp(s1,s2,n);
// 	b = ft_memcmp(s1,s3,n);
// 	c = ft_memcmp(s1,s4,n);
// 	printf("%d\n%d\n%d\n",a,b,c);
// 	return 0;
// }