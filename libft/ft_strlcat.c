/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:03:02 by kfaustin          #+#    #+#             */
/*   Updated: 2022/11/27 14:53:49 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/**
 *	- The ft_strlcat() function concatenate strings with the same input
 *	parameters and output result as snprintf(3).
 *
 *	- ft_strlcat() take the full size of the destination buffer and guarantee
 *	NUL-termination if there is room.  Note that room for the NUL should be
 *	included in dest_size.
 *
 *	- strlcat() appends string src to the end of dest.  It will append at most
 *	dst_size - strlen(dst) - 1 characters.  It will then NUL-terminate,
 *	unless dstsize is 0 or the original dst string was longer than dstsize
 *	(in practice this should not happen as it means that
 *	either dst_size is incorrect or that dst is not a proper string).
 *	- If the src and dest strings overlap, the behavior is undefined.
*/

size_t	ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	size_t	i;
	size_t	len_dest;
	size_t	len_src;
	size_t	res;
	size_t	n;

	if ((dest == NULL) && (dest_size == 0))
		return (0);
	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	if (dest_size < len_dest)
		return (ft_strlen(src) + dest_size);
	i = 0;
	n = dest_size - len_dest;
	res = len_dest + len_src;
	while (((i + 1) < n) && (*(src + i) != '\0'))
	{
		*(dest + (len_dest + i)) = *(src + i);
		i++;
	}
	(*(dest + (len_dest + i)) = '\0');
	return (res);
}
