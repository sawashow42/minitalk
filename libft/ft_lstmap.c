/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsawaki <shsawaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 22:40:17 by shsawaki          #+#    #+#             */
/*   Updated: 2022/08/22 07:10:39 by shsawaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_cont;

	if (!lst || !f || !del)
		return (NULL);
	new_cont = ft_lstnew(f(lst->content));
	if (!new_cont)
	{
		ft_lstclear(&lst, del);
		return (NULL);
	}
	new_lst = new_cont;
	lst = lst->next;
	while (lst)
	{
		new_cont = ft_lstnew(f(lst->content));
		if (!new_cont)
		{
			ft_lstclear(&new_lst, del);
			break ;
		}
		lst = lst->next;
		ft_lstadd_back(&new_lst, new_cont);
	}
	return (new_lst);
}
