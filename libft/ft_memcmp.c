/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:34:04 by kfaustin          #+#    #+#             */
/*   Updated: 2022/11/26 16:09:39 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*

*/
int	ft_memcmp(const void *buf1, const void *buf2, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)buf1;
	s2 = (unsigned char *)buf2;
	i = 0;
	if (n = 0)
		return (0);
	while ((*(s1 + i) == *(s2 + i)) && (i < n - 1))
	{
		i++;
	}
	return ((*(s1 + i)) - (*(s2 + i)));
}
