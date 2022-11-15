/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:18:23 by kfaustin          #+#    #+#             */
/*   Updated: 2022/11/15 13:06:27 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*

*/
void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)str + i) == ((unsigned char)c))
			return ((void *)str + i);
		i++;
	}
	return (NULL);
}
/* Error encountered while testing
void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;
	void	*str_cpy;

	i = 0;
	str_cpy = (void *)str;
	while ((*((unsigned char *)str_cpy + i) != '\0') && (i < n))
	{
		if (*((unsigned char *)str_cpy + i) == (unsigned char)c)
			return (str_cpy + i);
		i++;
	}
	if (c == '\0')
		return (str_cpy + i);
	return (0);
}
*/
