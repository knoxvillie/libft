/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 14:23:03 by kelvinfa          #+#    #+#             */
/*   Updated: 2022/11/07 11:30:41 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	A func recebe c, valor da tabela ascii, se a < c < z,
	 retornamos o similar maiusculo, se não, retornamos c.
*/
int	ft_toupper(int c)
{
	if ((c >= 97) && (c <= 122))
		c -= 32;
	return (c);
}
