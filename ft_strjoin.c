/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:48:49 by kfaustin          #+#    #+#             */
/*   Updated: 2022/11/11 11:10:53 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*

*/
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
/* Too many lines, strlcpy not used.
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
