/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:28:30 by kelvinfa          #+#    #+#             */
/*   Updated: 2022/11/27 15:30:41 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The tolower() function converts an upper-case letter to the corresponding
 * lower-case letter.
 *
 * If the argument is an upper-case letter, the tolower() function returns
 * the corresponding lower-case letter if there is one;
 * Otherwise, the argument is returned unchanged.
**/

int	ft_tolower(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		c += 32;
	return (c);
}

/* Old Versions:
int	ft_tolower(int c)
{
	if ((c >= 65) && (c <= 90))
		c += 32;
	return (c);
} */
