/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 23:19:08 by mmoreira          #+#    #+#             */
/*   Updated: 2021/02/21 00:56:57 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*c_lst;
	t_list	*temp;

	c_lst = NULL;
	if (!(lst))
		return (c_lst);
	while (lst)
	{
		if (!(temp = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&c_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&c_lst, temp);
		lst = lst->next;
	}
	return (c_lst);
}
