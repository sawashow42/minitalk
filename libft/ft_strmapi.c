/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsawaki <shsawaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 03:42:48 by shsawaki          #+#    #+#             */
/*   Updated: 2022/07/30 18:21:05 by shsawaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>

// char f(unsigned int i, char c)
// {
// 	char str;
// 	str = '0';
// 	return (str);
// }

// int main()
// {
// 	char s1[] = "abcdefu";
// 	char *s2;
// 	s2 = ft_strmapi(s1, *f);
// 	printf("%s\n%s\n", s1, s2);
// }
