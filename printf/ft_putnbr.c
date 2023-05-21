/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 17:18:03 by nzhuzhle          #+#    #+#             */
/*   Updated: 2023/05/21 21:20:43 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putlongnbr(long nb)
{
	int	len;
	int	check;

	if (nb < 10)
		return (ft_putchar(nb + 48));
	else
		len = ft_putlongnbr(nb / 10);
	check = ft_putchar(nb % 10 + 48);
	if (len == -1 || check == -1)
		return (-1);
	return (len + check);	
}

int	ft_putnbr(long nb)
{
	int	len;
	int	check;

	check = 0;
	if (nb < 0)
	{
		check = write(1, "-", 1);
		nb = nb * -1;
	}
	len = ft_putlongnbr(nb);
	if (len == -1 || check == -1)
		return (-1);
	return (len + check);
}

int	ft_putlongnbr_hex(long nb, const char x)
{
	char	*hex;
	int		len;
	int		check;

	if (x == 'x')
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	if (nb < 16)
		return (ft_putchar(hex[nb]));
	len = ft_putlongnbr_hex(nb / 16, x);
	check = ft_putchar(nb % 16);
	if (len == -1 || check == -1)
		return (-1);
	return (len + check);
}

int	ft_putnbr_hex(long nb, const char x)
{
	int	len;
	int	check;

	check = 0;
	if (nb < 0)
	{
		check = write(1, "-", 1);
		nb = nb * -1;
	}
	len = ft_putlongnbr_hex(nb, x);
	if (len == -1 || check == -1)
		return (-1);
	return (len + check);
}

int	ft_putptr_hex(void *p)
{
	int	len;
	int	check;

	check = write(1, "0x", 2);
	len = ft_putlongnbr_hex((long)p, 'x');
	if (len == -1 || check == -1)
		return (-1);
	return (len + check);
}
