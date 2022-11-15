/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:20:24 by kfaustin          #+#    #+#             */
/*   Updated: 2022/11/03 15:28:36 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*
	Preenche os primeiros n bytes do ponteiro buffer com o char,
	que tem valor ascii c. O endereco de buffer nao se altera.
	O type casting garante que a correta representacao de c.
*/
void	*ft_memset(void *buffer, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)buffer + i) = c;
		i++;
	}
	return (buffer);
}
