/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:50:40 by nzhuzhle          #+#    #+#             */
/*   Updated: 2023/05/19 17:14:18 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type(const char *str, va_list v_list)
{
	str++;
	if (*str == 'c')
		return (ft_putchar(va_arg(v_list, char)));
	if (*str == 's')
		return (ft_putstr(va_arg(v_list, char *)));
	if (*str == 'p')
		return (ft_putptr_hex(va_arg(v_list, void *));
	if (*str == 'd' || *str == 'i' || *str == 'u')
		return (ft_putnbr(va_arg(v_list, long)));
	if (*str == 'x'|| *str == 'X')
		return (ft_putnbr_hex(va_arg(v_list, long)), *str);
	return (-1);
}

int	ft_printf(const char *str, ...)
{
	va_list	v_list;
	int		numchr;
	int		check;

	num = 0;
	check = 0;
	va_start(v_list, str);
	while (*str && check > -1)
	{
		if(*str != '%')
		{
			check = check + ft_putchar(*str);
			// proverit resultat write
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
			check = check + ft_type(str, t_list);
			str = str + 2;
		}
		 // zdes ya schityvayu tip y otpravlayu pechatatsa
		 // ?dolzhna li ag_arg vysivatsa iznutri osnovnoy funccii?
		numchr = numchr + check;
	}
	if (check == -1)
		return (-1);
	//
	va_end(v_list);	
	return (num);
}


#include <stdio.h>

int	main(void)
{
/*	char	*str;
		
	str = "to print";
	while (*str)
    {
        if(*str != '%')
            ft_putchar_fd(*str, 1);
		str++;
	}*/
	char	*c = "abc";

	printf("\n%zd\n", write(1, c, 3));
	return (0);
}
