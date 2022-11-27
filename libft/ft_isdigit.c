/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:38:12 by kfaustin          #+#    #+#             */
/*   Updated: 2022/11/27 14:43:10 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 *	- The ft_isdigit() function tests for a decimal digit character.
 *	Regardless of locale, this includes the following characters only:
 *	'0'	'1'	'2'	'3'	'4'	'5'	'6'	'7'	'8'	'9'
 *	- The isdigit() function return zero if the character
 *	tests false and return non-zero if the character tests true.
*/

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/* Old verisons:
int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}*/
