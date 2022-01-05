/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <sle-huec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:39:51 by sle-huec          #+#    #+#             */
/*   Updated: 2022/01/05 13:42:08 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdarg.h>
#include <unistd.h>
#include "libft.h"
#include "ft_printf.h"

void ft_put_smth(va_list arg, const char *format)
{
	int	i;

	i = 0;
	{	
		if (format[i] == 'c')
			ft_putchar_fd(va_arg(arg, int), 1);
		else if (format[i] == 's')
			ft_putstr_fd(va_arg(arg, char *), 1);
		else if (format[i] == 'p')
			ft_put_ptr(va_arg(arg, unsigned long int));
		else if ((format[i] == 'd') || (format[i] == 'i'))
			ft_putnbr_fd(va_arg(arg, int), 1);
		else if (format[i] == 'u')
			ft_putnbr_unsigned(va_arg(arg, unsigned int));
		else if (format[i] == 'x')
			ft_putnbr_hexa(va_arg(arg, unsigned int));
		else if (format[i] == 'X')
			ft_putnbr_hexa_upp(va_arg(arg, unsigned int));
		else if (format[i] == '%')
			ft_putchar_fd('%', 1);
	}
}

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	arg;

	va_start (arg, format);
	i = 0;
	while (format[i])
	{	
		if (format[i] != '%')
			ft_putchar_fd(format[i], 1);
		if (format[i] == '%')
		{
			ft_put_smth(arg, &format[i + 1]);
			i++;
		}
		i++;
	}
	va_end (arg);
	//
	return 0;
}
