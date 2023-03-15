/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:23:40 by kfaustin          #+#    #+#             */
/*   Updated: 2023/03/05 19:49:13 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/**
 * @brief	The ft_strchr() function locates the first occurrence of 'c' \
 *			in the string pointed to by 'str'. The terminating null character \
 			considered to be part of the string. Therefore if 'c' is '\0', the \
			functions locate the terminating '\0'. The functions ft_strchr() \
			return a pointer to the located character 'c', or NULL if the character \
			does not appear in the string.
 *
 * @param str The buffer
 * @param c The ASCII value
 * @return char *str
 */

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == c)
			return ((char *)str);
		str++;
	}
	if (!c)
		return ((char *)str);
	return (NULL);
}

/* Old versions:
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
} */
