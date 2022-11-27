/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:06:47 by kfaustin          #+#    #+#             */
/*   Updated: 2022/11/27 14:43:45 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 *	The ft_atoi() function converts the initial portion of the string
 *	pointed to by ptr to int representation.
 *	Not overflow protected.
**/
int	ft_atoi(const char *ptr)
{
	int	sign;
	int	res;

	sign = 1;
	res = 0;
	while ((*ptr == '\f') || (*ptr == '\n') || (*ptr == '\r')
		|| (*ptr == '\t') || (*ptr == '\v') || (*ptr == ' '))
		ptr++;
	if ((*ptr == '+') || (*ptr == '-'))
	{
		if (*ptr == '-')
			sign *= -1;
		ptr++;
	}
	while ((*ptr >= '0') && (*ptr <= '9'))
	{
		res *= 10;
		res += (*ptr - 48);
		ptr++;
	}
	return (res * sign);
}
