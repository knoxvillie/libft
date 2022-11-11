/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:06:03 by kfaustin          #+#    #+#             */
/*   Updated: 2022/11/10 17:12:20 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*mainh;
	t_list	*temp;
	t_list	*new;

	if (!lst)
		return (NULL);
	mainh = ft_lstnew((*f)(lst->content));
	if (!mainh)
		return (NULL);
	temp = lst->next;
	while (temp != NULL)
	{
		new = ft_lstnew((*f)(temp->content));
		if (!new)
		{
			ft_lstclear(&mainh, del);
			return (NULL);
		}
		ft_lstadd_back(&mainh, new);
		temp = temp->next;
	}
	return (mainh);
}
