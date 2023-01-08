/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:34:04 by kfaustin          #+#    #+#             */
/*   Updated: 2022/11/27 14:44:00 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"


/**
 * The ft_memcmp() function compares byte string s1 against byte string s2.
 * Both strings are assumed to be n bytes long.
 *
 * The memcmp() function returns zero if the two strings are identical,
 * otherwise returns the difference (ASCII value) between the first two differing bytes.
 * Zero-length strings are always identical.
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
	while ((*(s1 + i) == *(s2 + i)) && (i < n - 1))
	{
		i++;
	}
	return ((*(s1 + i)) - (*(s2 + i)));
}
