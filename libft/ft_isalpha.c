/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:57:56 by kfaustin          #+#    #+#             */
/*   Updated: 2022/11/03 12:16:08 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Se o valor do char c estiver entre 'A' e 'Z' ou 'a' e 'z', entao eh alfabetico.
*/
int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
