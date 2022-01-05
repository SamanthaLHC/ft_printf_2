/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 13:49:59 by sle-huec          #+#    #+#             */
/*   Updated: 2021/12/31 15:15:55 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "libft.h"

void	ft_put_hexa(unsigned long int n)
{
	char	*base_hexa;

	base_hexa = "0123456789abcdef";
	if (n > 15)
		ft_put_hexa(n / 16);
	ft_putchar_fd(base_hexa[n % 16], 1);
}

void	ft_put_ptr(unsigned long int n)
{
	ft_putstr_fd("0x", 1);
	ft_put_hexa(n);
}
