/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:34:04 by kfaustin          #+#    #+#             */
/*   Updated: 2022/11/08 12:41:10 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*

*/
int	ft_memcmp(const void *spc1, const void *spc2, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)spc1;
	s2 = (unsigned char *)spc2;
	i = 0;
	if (!n)
		return (0);
	while ((*(s1 + i) == *(s2 + i)) && (i < n - 1))
	{
		i++;
	}
	return ((*(s1 + i)) - (*(s2 + i)));
}
