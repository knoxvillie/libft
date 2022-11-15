/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:34:14 by kfaustin          #+#    #+#             */
/*   Updated: 2022/11/03 12:44:23 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Se o valor do char c estiver entre ' ' e 'Del', entao eh printavel.
*/
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
