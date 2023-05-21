/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:50:40 by nzhuzhle          #+#    #+#             */
/*   Updated: 2023/05/21 21:15:12 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type(const char *str, va_list alst)
{
	str++;
	if (*str == 'c')
		return (ft_putchar(va_arg(alst, int)));
	if (*str == 's')
		return (ft_putstr(va_arg(alst, char *)));
	// nuzhno li proveriat pustaya li stroka?
	if (*str == 'p')
		return (ft_putptr_hex(va_arg(alst, void *)));
	if (*str == 'd' || *str == 'i' || *str == 'u')
		return (ft_putnbr(va_arg(alst, long)));
	if (*str == 'x'|| *str == 'X')
		return (ft_putnbr_hex(va_arg(alst, long), *str));
	return (-1);
}

int	ft_printf(const char *str, ...)
{
	va_list	alst;
	int		numchr;
	int		check;

	numchr = 0;
	check = 0;
	va_start(alst, str);
	while (*str && check > -1)
	{
		if(*str != '%')
		{
			check = check + ft_putchar(*str);
			str++;
		}
		else if (*str == '%' && *(str + 1) == '%')
		{
			check = check + ft_putchar(*(str + 1));
			str = str + 2;
		}
		// proverit logicu - dolzhny li my voobshe pechatat choto-to esli cho-to ne tak s args ili formatom
		else
		{	
			check = check + ft_type(str, alst);
			str = str + 2;
		}
		 // zdes ya schityvayu tip y otpravlayu pechatatsa
		numchr = numchr + check;
	}
	if (check == -1)
		return (-1);
	va_end(alst);	
	return (numchr);
}


/*#include <stdio.h>

int	main(void)
{
	char	*str;
		
	str = "to print";
	while (*str)
    {
        if(*str != '%')
            ft_putchar_fd(*str, 1);
		str++;
	}
	char	*c = "abc";

	printf("\n%zd\n", write(1, c, 3));
	return (0);
}*/
