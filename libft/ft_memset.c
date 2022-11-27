/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:20:24 by kfaustin          #+#    #+#             */
/*   Updated: 2022/11/27 14:50:57 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/**
 *	- The ft_memset() function writes n bytes of value c
 *	(converted to an unsigned char) to buffer.
 *
 *	- The ft_memset() function returns the buffer.
**/

void	*ft_memset(void *buffer, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)buffer + i) = c;
		i++;
	}
	return (buffer);
}
