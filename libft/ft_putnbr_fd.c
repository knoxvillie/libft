/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfaustin <kfaustin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:55:16 by kfaustin          #+#    #+#             */
/*   Updated: 2022/11/11 11:48:07 by kfaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
/*

*/
void	ft_putnbr_fd(int n, int fd)
{
	long	num;

	num = n;
	if (num == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		num = 147483648;
	}
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num *= -1;
	}
	if ((num >= 0) && (num <= 9))
	{
		ft_putchar_fd((num + 48), fd);
	}
	else
	{
		ft_putnbr_fd((num / 10), fd);
		ft_putnbr_fd((num % 10), fd);
	}
}
/*
#include<stdio.h>
#include<limits.h>
int main(void)
{
	int	fd = 1;
	ft_putnbr_fd(0, fd);
	printf("\n");
	ft_putnbr_fd(-0, fd);
	printf("\n");
	ft_putnbr_fd(+0, fd);
	printf("\n");
	ft_putnbr_fd(INT_MAX, fd);
	printf("\n");
	ft_putnbr_fd(INT_MIN, fd);
	printf("\n");
	ft_putnbr_fd(-10, fd);
	printf("\n");
	ft_putnbr_fd(10, fd);
	printf("\n");
	ft_putnbr_fd(-5623, fd);
	printf("\n");
	ft_putnbr_fd(5623, fd);


	return 0;
}*/
