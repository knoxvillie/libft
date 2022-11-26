/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:07:46 by kfaustin          #+#    #+#             */
/*   Updated: 2022/11/26 15:50:21 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 *	The isascii() function tests for an ASCII character,
 *	which is any character between 0 and decimal 127 inclusive.
**/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
