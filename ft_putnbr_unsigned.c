/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 13:38:43 by sle-huec          #+#    #+#             */
/*   Updated: 2022/01/05 14:12:50 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "libft.h"

int	ft_cont(unsigned int n)
{
	int	count;

	count = 0;
	if (n < 0)
		count++;
	if (n == 0)
		count ++;
	while (n != 0)
	{
		n /= 16;
		count ++;
	}
	return (count);
}

int	ft_putnbr_unsigned(unsigned int n)
{
	if (n > 9)
		ft_putnbr_unsigned(n / 10);
	ft_putchar_fd(n % 10 + '0', 1);
	return (ft_cont(n));
}
