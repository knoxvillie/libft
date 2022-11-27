/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:09:11 by kfaustin          #+#    #+#             */
/*   Updated: 2022/11/27 18:55:34 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/**
 * - Description:
 * Allocates (with malloc(3)) and returns a new node.
 * The member variable 'content' is initialized with the value of the
 * parameter 'content'.
 * The variable 'next' is initialized to NULL.
 *
 * - Parameters:
 * content: The content to create the node with.
 *
 * - Return value:
 * The new node.
**/

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
