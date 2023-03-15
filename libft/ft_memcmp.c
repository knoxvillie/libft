/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:34:04 by kfaustin          #+#    #+#             */
/*   Updated: 2023/03/12 21:49:28 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/**
 * @brief	Compares bytes by bytes 's1' against 's2'
 *
 * The ft_memcmp() function returns zero if the two strings are identical,
 * otherwise returns the difference (ASCII value) between the first two
 * differing bytes. Zero-length strings are always identical. Both strings
 * are assumed to be n bytes long.
 *
 * @param	buf1 Void buffer
 * @param	buf2 Void buffer
 * @param	n The length of both strings
 * @return	int.
**/

int	ft_memcmp(const void *buf1, const void *buf2, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)buf1;
	s2 = (unsigned char *)buf2;
	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && (i < n - 1))
		i++;
	return (s1[i] - s2[i]);
}
