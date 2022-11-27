/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 14:23:03 by kelvinfa          #+#    #+#             */
/*   Updated: 2022/11/27 15:32:42 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The toupper() function converts a lower-case letter to the corresponding
 * upper-case letter.  The argument must be representable as an
 * unsigned char or the value of EOF.
 *
 * If the argument is a lower-case letter, the toupper() function returns the
 * corresponding upper-case letter if there is one;
 * otherwise, the argument is returned unchanged.
*/

int	ft_toupper(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		c -= 32;
	return (c);
}

/* Old Versions:
int	ft_toupper(int c)
{
	if ((c >= 97) && (c <= 122))
		c -= 32;
	return (c);
} */
