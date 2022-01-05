/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 13:38:25 by sle-huec          #+#    #+#             */
/*   Updated: 2021/12/31 15:18:31 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "libft.h"

void	ft_putnbr_hexa(unsigned int n)
{
	char	*base_hexa;

	base_hexa = "0123456789abcdef";
	if (n > 15)
		ft_putnbr_hexa(n / 16);
	ft_putchar_fd(base_hexa[n % 16], 1);
}
