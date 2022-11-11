/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:48:11 by kfaustin          #+#    #+#             */
/*   Updated: 2022/11/08 15:47:43 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*

*/
/* FULL ERROR UNIT TEST
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
