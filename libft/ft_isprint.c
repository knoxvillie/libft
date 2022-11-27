/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:34:14 by kfaustin          #+#    #+#             */
/*   Updated: 2022/11/27 14:43:04 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 *	The ft_isprint() function tests for any printing character,
 *	including space (‘ ’).  The value of the argument must be
 *	representable as an unsigned char or the value of EOF.
 *
 *	- The isprint() function returns zero if the character tests false and
 *	returns non-zero if the character tests true.
**/

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	else
		return (0);
}

/*
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
*/
