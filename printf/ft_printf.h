/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:04:32 by nzhuzhle          #+#    #+#             */
/*   Updated: 2023/05/21 21:25:05 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "../libft/libft.h"

/* archivo ft_printf.c *****************************************/

int	ft_printf(const char *str, ...);
int	ft_type(const char *str, va_list alst);

/* archivo ft_putchar.c ****************************************/
int	ft_putchar(int c);
int	ft_putstr(char *s);

/* archivo ft_putnbr.c *****************************************/
int	ft_putnbr(long nb);
int	ft_putlongnbr(long nb);
int	ft_putnbr_hex(long nb, const char x);
int ft_putlongnbr_hex(long nb, const char x);
int	ft_putptr_hex(void *);

#endif
