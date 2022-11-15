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
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr || !s)
		return (0);
	i = 0;
	while (len > i && *(s + start + i) != '\0' && start < ft_strlen((char *)s))
	{
		*(ptr + i) = *(s + start + i);
		i++;
	}
	*(ptr + i) = '\0';
	return (ptr);
}
/* test_ft_substr: Error encountered while testing
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
}*/
