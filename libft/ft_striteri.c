/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:05:22 by kfaustin          #+#    #+#             */
/*   Updated: 2023/03/12 21:41:10 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/**
 * @brief	Applies the function 'f' on each character of the string 's'.
 * 			Each character is passed by address to 'f' to be modified if
 * 			necessary.
 *
 * @param	s The string
 * @param	f A pointer to a void function.
 * @return	void
 */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, (s + i));
		i++;
	}
}
