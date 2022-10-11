/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsawaki <shsawaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 04:04:49 by shsawaki          #+#    #+#             */
/*   Updated: 2022/08/22 07:16:46 by shsawaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	w_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static	int	w_size(char	const *s, char c, int i)
{
	int	l;

	l = 0;
	while (s[i] && s[i] != c)
	{
		l++;
		i++;
	}
	return (l);
}

static	void	my_free(char **str, int i)
{
	while (i--)
		free(str[i]);
	free(str);
}

static	char	**str_malloc(char **str, int str_size)
{
	str = (char **)malloc(sizeof(char *) * (str_size + 1));
	if (!str)
		return (NULL);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		w_len;

	str = NULL;
	str = str_malloc(str, w_count(s, c));
	i = -1;
	j = 0;
	while (++i < w_count(s, c))
	{
		while (s[j] == c)
			j++;
		w_len = w_size(s, c, j);
		str[i] = ft_substr(s, j, w_len);
		if (!str)
		{
			my_free(str, i);
			return (NULL);
		}
		j += w_len;
	}
	str[i] = 0;
	return (str);
}
