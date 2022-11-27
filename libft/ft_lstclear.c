/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:53:46 by kfaustin          #+#    #+#             */
/*   Updated: 2022/11/27 18:51:45 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * - Description:
 * Deletes the given node and every successor of that node, usign the
 * function 'del'.
 * Finally, the pointer to the list must be set to NULL.
 *
 * - Parameters:
 * lst: The address of a pointer to a node.
 * del: The address of the function used to delete the content of the node.
 *
 * - Return value:
 * None
**/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}
