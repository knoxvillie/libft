/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:10:20 by kfaustin          #+#    #+#             */
/*   Updated: 2023/03/12 21:51:26 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/**
 * @brief	Allocates (with malloc(3)) and returns a substring from the string 's'
 * 			The substring begins at index 'start' and is of maximum size 'len'.
 *
 * @param s	The string from which to create the substring.
 * @param start	The start index of the substring in the string 's'.
 * @param len	The maximum length of the substring.
 * @return	char *str
 */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while ((len > i) && s[start + i] && (start < ft_strlen((char *)s)))
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
