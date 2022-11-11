/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:22:43 by kfaustin          #+#    #+#             */
/*   Updated: 2022/11/08 12:16:31 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*

*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	int		area;

	area = nmemb * size;
	ptr = malloc(area);
	if (!ptr)
		return (NULL);
	ptr = ft_memset(ptr, 0, area);
	return (ptr);
}
