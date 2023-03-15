/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:43:38 by kfaustin          #+#    #+#             */
/*   Updated: 2023/03/05 18:59:50 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/**
 * @brief	The ft_strdup() function allocates enough memory for a copy of the \
 *			string 'str', does the copy, and returns a pointer to it. The pointer \
 *			may subsequently be used as an argument to the function free(3). \
 *			If insufficient memory is available, NULL is returned.
 *
 * @param str	The pointer to be copied.
 * @return		char* str
 */

char	*ft_strdup(const char *str)
{
	size_t	i;
	size_t	size;
	char	*copy;

	size = (ft_strlen(str) + 1);
	copy = (char *)malloc(sizeof(char) * size);
	if (!copy)
		return (NULL);
	i = 0;
	while (i < size)
	{
		copy[i] = str[i];
		i++;
	}
	return (copy);
}
