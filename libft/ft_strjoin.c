/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:48:49 by kfaustin          #+#    #+#             */
/*   Updated: 2022/11/27 15:57:19 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/**
 *	Allocates (with malloc(3)) and returns a new string, which is the result
 *	of the concatenation of 's1' and 's2'.
 *
 *	- Parameters:
 *	s1: The prefix string
 *	s2: The suffix string
 *
 *	- Return value:
 *	The new string. NULL if the allocation fails.
**/

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;
	size_t	lentotal;

	lentotal = (ft_strlen(s1) + ft_strlen(s2));
	str = malloc(sizeof(char) * (lentotal + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1 && *(s1 + i))
	{
		*(str + i) = *(s1 + i);
		i++;
	}
	j = 0;
	while (s2 && *(s2 + j))
	{
		*(str + i++) = *(s2 + j++);
	}
	*(str + i) = '\0';
	return (str);
}

/* Old versions:
char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*str;
	size_t		lentotal;
	size_t		indexs1;

	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	lentotal = ((ft_strlen(s1) + ft_strlen(s2)) + 1);
	str = (char *)malloc(sizeof(char) * (lentotal));
	if (!str)
		return (NULL);
	indexs1 = ft_strlcpy(str, s1, (ft_strlen(s1) + 1));
	ft_strlcpy((str + indexs1), s2, (ft_strlen(s2) + 1));
	return (str);
}

Too many lines, strlcpy not used.
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		lens1;
	int		lentotal;
	int		i;
	int		j;

	lens1 = ft_strlen(s1);
	lentotal = ((lens1 + ft_strlen(s2)) + 1);
	str = (char *)malloc(sizeof(char) * (lentotal));
	if (!str)
		return (NULL);
	i = 0;
	while ((lens1 - i) > 0)
	{
		*(str + i) = *(s1 + i);
		i++;
	}
	j = 0;
	while ((lentotal - i) >= 0)
	{
		*(str + i) = *(s2 + j);
		i++;
		j++;
	}
	return (str);
}*/
