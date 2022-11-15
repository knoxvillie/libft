/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:07:46 by kfaustin          #+#    #+#             */
/*   Updated: 2022/11/03 15:22:09 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Se o valor do char c estiver contido no intervalo de '\0' e 'Del',
	entao tem 7bits.
*/
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
