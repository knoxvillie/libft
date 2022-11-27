/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:57:56 by kfaustin          #+#    #+#             */
/*   Updated: 2022/11/27 14:43:19 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 *	- The ft_isalpha() function tests for any character for which
 *	isupper(3) or islower(3) is true.  The value of the argument must be
 *	representable as an unsigned char or the value of EOF.
 *
 *	- The isalpha() function returns zero if the character tests false and
 *	returns non-zero if the character tests true.
*/

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/* Old versions:
int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
*/
