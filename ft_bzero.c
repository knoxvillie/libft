/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:29:31 by kfaustin          #+#    #+#             */
/*   Updated: 2022/11/04 11:37:49 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
/*
	A func altera o os n primeiros bytes de conteudo do buffer para nulo.
*/

void	ft_bzero(void *buffer, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)buffer + i) = '\0';
		i++;
	}
}
