/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsawaki <shsawaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 01:36:04 by shsawaki          #+#    #+#             */
/*   Updated: 2022/08/22 06:00:57 by shsawaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*c1;
	unsigned char	*c2;

	i = 0;
	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	while (i < n && (c1[i] || c2[i]))
	{
		if (c1[i] != c2[i])
			return (c1[i] - c2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	s1[] = "ABC";
// 	char	s2[] = "ABD";
// 	char	s3[] = "B";
// 	char	s4[] = "AAA";
// 	char	s5[] = "ABC";
// 	int	a,b, c, d, e, f, g, h;
// 	size_t	l = 2;

// 	a = ft_strncmp(s1, s2, l);
// 	b = ft_strncmp(s1, s3, l);
// 	c = ft_strncmp(s1, s4, l);
// 	d = ft_strncmp(s1, s5, l);

// 	e = strncmp(s1, s2, l);
// 	f = strncmp(s1, s3, l);
// 	g = strncmp(s1, s4, l);
// 	h = strncmp(s1, s5, l);
// 	printf("%d,%d,%d,%d\n", a, b, c, d);
// 	printf("%d,%d,%d,%d\n", e, f, g, h);
// }