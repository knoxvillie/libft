/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:29:46 by kfaustin          #+#    #+#             */
/*   Updated: 2022/11/27 15:59:59 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/**
 * Applies the function 'f' to each character of the string 's', and passing
 * its index as first argument to create a new string (with malloc(3))
 * resulting from successive applications of 'f'.
 *
 * - Parameters:
 * s: The string on which to iterate.
 * f: The function to apply to each character.
 *
 * Returns the string created from the successive applications of 'f'
 * or NULL if the allocation fails.
**/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	if (!s)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (*(s + i) != '\0')
	{
		*(str + i) = f(i, *(s + i));
		i++;
	}
	*(str + i) = '\0';
	return (str);
}
