/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 16:26:49 by sle-huec          #+#    #+#             */
/*   Updated: 2021/12/31 15:12:24 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
void	ft_putnbr_unsigned(unsigned int n);
void	ft_putnbr_hexa(unsigned int n);
void	ft_putnbr_hexa_upp(unsigned int n);
void	ft_put_ptr(unsigned long int n);

#endif
