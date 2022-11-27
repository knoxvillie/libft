/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:22:43 by kfaustin          #+#    #+#             */
/*   Updated: 2022/11/27 14:43:29 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/**
 * The ft_calloc() function contiguously allocates enough space for count
 * objects that are size bytes of memory each and returns a pointer to
 * the allocated memory.
 * The allocated memory is filled with bytes of value zero.
*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*buffer;
	int		area;

	area = nmemb * size;
	buffer = malloc(area);
	if (!buffer)
		return (NULL);
	while (--area >= 0)
		*(buffer + area) = '\0';
	return ((void *)buffer);
}
/* Old versions
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
*/
