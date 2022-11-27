/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:10:20 by kfaustin          #+#    #+#             */
/*   Updated: 2022/11/27 15:57:23 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/**
 * Allocates (with malloc(3)) and returns a substring from the string 's'
 * The substring begins at index 'start' and is of maximum size 'len'.
 *
 * - Parameters:
 * s: The string from which to create the substring.
 * start: The start index of the substring in the string 's'.
 * len: The maximum length of the substring.
 *
 * - Returnes the substring or NULL if the allocation fails.
**/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr || !s)
		return (0);
	i = 0;
	while (len > i && *(s + start + i) != '\0' && start < ft_strlen((char *)s))
	{
		*(ptr + i) = *(s + start + i);
		i++;
	}
	*(ptr + i) = '\0';
	return (ptr);
}

/* (Moulinette)Error encountered while testing
char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*substring;
	size_t	size;
	int		i;
	if (str == NULL)
		return (NULL);
	if (start >= len)
		len = 0;
	size = len + 1;
	substring = (char *)malloc(sizeof(char) * size);
	if (!substring)
		return (NULL);
	i = 0;
	while ((*(str + i + start) != '\0') && (i + start) < (start + len))
	{
			*(substring + i) = *(str + start + i);
			i++;
	}
	*(substring + i) = '\0';
	return (substring);
}*/
