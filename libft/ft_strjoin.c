/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsawaki <shsawaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 21:10:30 by shsawaki          #+#    #+#             */
/*   Updated: 2022/08/22 05:51:58 by shsawaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ns;
	int		len;
	int		i;
	int		j;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	ns = (char *)malloc(sizeof(char) * len);
	if (!ns)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		ns[i] = s1[i];
		i++;
	}
	while (s2[j])
		ns[i++] = s2[j++];
	ns[i] = '\0';
	return (ns);
}

// int main()
// {
// 	char s1[] = "hello,", s2[] = "world", *ns;
// 	ns = ft_strjoin(s1, s2);
// 	printf("%s\n", ns);
// 	return 0;
// }