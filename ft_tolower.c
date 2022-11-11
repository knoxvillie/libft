/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:28:30 by kelvinfa          #+#    #+#             */
/*   Updated: 2022/11/07 11:29:11 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	A func transforma c em seu simetrico minusculo, se A < c < Z,
	se não retorna c.
*/
int	ft_tolower(int c)
{
	if ((c >= 65) && (c <= 90))
		c += 32;
	return (c);
}
