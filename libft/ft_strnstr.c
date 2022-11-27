/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:48:11 by kfaustin          #+#    #+#             */
/*   Updated: 2022/11/27 15:20:37 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/**
 * The ft_strnstr() function locates the first occurrence of the null-terminated
 * string little in the string big, where not more than len characters are
 * searched.  Characters that appear after a ‘\0’ character are not searched.
 *
 * If little is an empty string, big is returned; if little occurs
 * nowhere in big, NULL is returned; otherwise a pointer to the first
 * character of the first occurrence of little is returned.
*/

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!(*little))
		return ((char *)big);
	i = 0;
	j = 0;
	while (i < len && *(big + i) != '\0')
	{
		while (*(big + i + j) == *(little + j)
			&& *(little + j) != '\0' && *(big + i + j) != '\0' && i + j < len)
			j++;
		if (*(little + j) == '\0')
			return ((char *)(big + i));
		j = 0;
		i++;
	}
	return (0);
}

/* FULL OF ERRORS UNIT TEST
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!(*(little)))
		return ((char *)big);
	i = 0;
	j = 0;
	while ((*(big + i) != '\0') && (i < len))
	{
		while ((*(big + i + j) != '\0')
			&& (*(big + i + j) == *(little + j))
			&& ((i + j) < len) && (*(little + j) != '\0'))
			j++;
		if (*(little + j) != '\0')
			return ((char *)(big + i));
		j = 0;
		i++;
	}
	return (0);
}
*/
