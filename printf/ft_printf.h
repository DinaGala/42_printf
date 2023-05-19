/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:04:32 by nzhuzhle          #+#    #+#             */
/*   Updated: 2023/05/19 17:24:50 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "libft/libft.h"

/* archivo ft_printf.c ****************************************/

int	ft_printf(const char *str, ...);
int	ft_type(const char *str, va_list v_list);

/* archivo ft_putchar.c ***************************************/
int	ft_putchar(char c);
int	ft_putstr(char *s);

/* archivo ft_putnbr.c ***************************************/
int	ft_putnbr(long nb);
int	ft_putnbr_hex(long nb, const char x);
int	ft_putptr_hex(void *);

#endif
