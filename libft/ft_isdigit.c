/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:38:12 by kfaustin          #+#    #+#             */
/*   Updated: 2022/11/03 12:17:29 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Se o valor do char c estiver entre '0' e '9', entao eh um algarismo.
*/
int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
