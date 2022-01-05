/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa_upp.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 13:36:23 by sle-huec          #+#    #+#             */
/*   Updated: 2021/12/31 15:19:05 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "libft.h"

void	ft_putnbr_hexa_upp(unsigned int n)
{
	char	*base_hexa;

	base_hexa = "0123456789ABCDEF";
	if (n > 15)
		ft_putnbr_hexa_upp(n / 16);
	ft_putchar_fd(base_hexa[n % 16], 1);
}
