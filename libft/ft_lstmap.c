/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:06:03 by kfaustin          #+#    #+#             */
/*   Updated: 2022/11/27 18:54:46 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/**
 * - Description:
 * Iterates the list 'lst' and applies the function 'f' on the
 * content of each node.
 * Creates a new list resulting of the successive applications
 * of the function 'f'.
 * The 'del' function is used to delete the content of a node if needed.
 *
 * - Parameters:
 * lst: The address of a pointer to a node.
 * f: The address of the function used to iterate on the list.
 * del: The address of the function used to delete
 *		the content of a node if needed.
 *
 * - Return value:
 * The new list.
 * NULL if the allocation fails.
**/

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
