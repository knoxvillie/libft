/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:39:22 by kfaustin          #+#    #+#             */
/*   Updated: 2022/11/27 18:52:00 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/**
 * - Description:
 * Takes as a parameter a node and frees the memory of the node's content usign
 * the function 'del' given as a parameter and free the node.
 * The memory of 'next' myst not be freed.
 *
 * - Parameters:
 * lst: The node to free.
 * del: The address of the function used to delete the content.
 *
 * - Return value:
 * None
**/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
