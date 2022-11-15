/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:33:55 by kfaustin          #+#    #+#             */
/*   Updated: 2022/11/08 16:04:26 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*
	A func retorno um porteiro para a ultima
		ocorrencia de c e str.
	Retorno: Se nao houver ocorrencia > NULL
			 Se c = '\0', > ponteiro para final da str
			 Se nao > ponteiro de indice last_match
*/

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
