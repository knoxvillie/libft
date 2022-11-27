/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:33:55 by kfaustin          #+#    #+#             */
/*   Updated: 2022/11/27 15:22:17 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/**
 * The ft_strrchr() function is identical to ft_strchr(), except it
 * locates the last occurrence of c.
 *
 * The strrchr() return a pointer to the located character,
 * or NULL if the character c does not appear in the string.
**/

char	*ft_strrchr(const char *str, int c)
{
	int			i;
	const char	*buffer;

	i = ft_strlen(str);
	buffer = (str + i);
	while (i >= 0)
	{
		if (*buffer == c)
			return ((char *)buffer);
		buffer--;
		i--;
	}
	if (c == '\0')
		return ((char *)buffer);
	return (0);
}

/* Error basic input
char	*ft_strrchr(const char *str, int c)
{
	int			i;
	int			last_match;
	const char	*str_cpy;

	i = 0;
	last_match = 0;
	str_cpy = str;
	while (*(str_cpy + i) != '\0')
	{
		if (*(str_cpy + i) == c)
			last_match = i;
		i++;
		if (c == '\0')
			return ((char *)(str_cpy + ft_strlen(str_cpy)));
	}
	if (last_match)
		return ((char *)(str_cpy + last_match));
	return (0);
}*/
