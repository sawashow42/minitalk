/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsawaki <shsawaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:02:20 by shsawaki          #+#    #+#             */
/*   Updated: 2022/08/22 01:01:32 by shsawaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*addr;

	if (count == 0 || size == 0)
	{
		addr = malloc(1);
		if (!addr)
			return (NULL);
		((char *)addr)[0] = '0';
		return (addr);
	}
	if (count > SIZE_MAX / size)
		return (NULL);
	addr = malloc(count * size);
	if (!addr)
		return (NULL);
	ft_bzero(addr, count * size);
	return (addr);
}
