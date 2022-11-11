/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:10:20 by kfaustin          #+#    #+#             */
/*   Updated: 2022/11/09 12:19:20 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*

*/
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
}
