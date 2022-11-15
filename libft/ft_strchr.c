/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:23:40 by kfaustin          #+#    #+#             */
/*   Updated: 2022/11/08 14:51:28 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *str, int c)
{
	const char	*cpy_str;

	cpy_str = str;
	while (*cpy_str != '\0')
	{
		if (*cpy_str == c)
		{
			return ((char *)cpy_str);
		}
		cpy_str++;
	}
	if (c == '\0')
		return ((char *)cpy_str);
	return (0);
}
