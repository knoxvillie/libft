/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:27:32 by kfaustin          #+#    #+#             */
/*   Updated: 2022/11/27 16:02:01 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/**
 * Outputs the character 'c' to the given file descriptor.
 *
 * - Parameters:
 * c: The character to output.
 * fd: The file descriptor on which to write.
 *
 * - Returns None
**/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
