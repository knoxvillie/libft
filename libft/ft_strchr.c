/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:23:40 by kfaustin          #+#    #+#             */
/*   Updated: 2022/11/27 15:39:01 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/**
 * The ft_strchr() function locates the first occurrence of c
 * (converted to a char) in the string pointed to by str.
 * The terminating null character is considered to be part of the string;
 * Therefore if c is ‘\0’, the functions locate the terminating ‘\0’
 *
 * The functions ft_strchr() return a pointer to the located character c,
 * or NULL if the character does not appear in the string.
*/

char	*ft_strchr(const char *str, int c)
{
	if (!str)
		return (NULL);
	while (*str)
	{
		if (*str == c)
			return ((char *)str);
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return (0);
}

/* Old versions:
char	*ft_strchr(const char *str, int c)
{
	const char	*cpy_str;

	cpy_str = str;
	while (*cpy_str != '\0')
	{
		if (*cpy_str == c)
		{
			return ((char *)cpy_str);
		}
		cpy_str++;
	}
	if (c == '\0')
		return ((char *)cpy_str);
	return (0);
} */
