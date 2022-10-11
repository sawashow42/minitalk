/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsawaki <shsawaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 02:45:38 by shsawaki          #+#    #+#             */
/*   Updated: 2022/08/22 07:17:28 by shsawaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	char_check(const char *set, char s)
{
	while (*set)
	{
		if (*set == s)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		start;
	int		end;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && char_check(set, s1[start]))
		start++;
	while (end > start && char_check(set, s1[end - 1]))
		end--;
	str = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%s\n", ft_strtrim("hello world", "world"));
// 	printf("%s\n", ft_strtrim("hello world", "hello"));
// 	printf("%s\n", ft_strtrim("    hello world     ", " "));
// 	printf("%s\n", ft_strtrim("hello world", "abcdefghijklmnopqrstuvwxyz"));

// 	return (0);
// }
