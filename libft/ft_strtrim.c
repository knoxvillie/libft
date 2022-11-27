/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:08:57 by kfaustin          #+#    #+#             */
/*   Updated: 2022/11/27 15:57:14 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/**
 * Allocates (with malloc(3)) and returns a copy of 's1' with the characters
 * specified in 'set' removed from the beginning and the end of the string.
 *
 * - Parameters:
 * s1: The string to be trimmed.
 * set: the reference set of characters to trim.
 *
 * Returns the trimmed string or NULL if the allocation fails.
**/

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	i = 0;
	j = (ft_strlen(s1) - 1);
	while ((*(s1 + i) != '\0') && (ft_strchr(set, *(s1 + i))))
		i++;
	while ((*(s1 + i) != '\0') && (ft_strchr(set, *(s1 + j))))
		j--;
	str = ft_substr(s1, i, ((j - i) + 1));
	return (str);
}
