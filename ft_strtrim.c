/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:08:57 by kfaustin          #+#    #+#             */
/*   Updated: 2022/11/09 12:27:57 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*

*/
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
