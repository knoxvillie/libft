/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:05:22 by kfaustin          #+#    #+#             */
/*   Updated: 2022/11/27 16:01:18 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/**
 * Applies the function 'f' on each character of the string 's' passed as argument,
 * passing its index as first argument. Each character is passed by address to
 * 'f' to be modified if necessary.
 *
 * - Parameters:
 * s: The string on which to iterate.
 * f: The function to apply to each character.
 *
 * - Returns None
**/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (*(s + i) != '\0')
	{
		(*f)(i, (s + i));
		i++;
	}
}
