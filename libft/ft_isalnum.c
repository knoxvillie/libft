/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:48:07 by kfaustin          #+#    #+#             */
/*   Updated: 2022/11/27 14:43:23 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/**
 *	- The ft_isalnum() function tests for any character for which isalpha(3) or
 *	isdigit(3) is true.  The value of the argument must be representable as
 *	an unsigned char or the value of EOF.
 *
 *	- The isalnum() function returns zero if the character tests false
 *	and returns non-zero if the character tests true.
*/

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}
