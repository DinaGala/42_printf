/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzhuzhle <nzhuzhle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 20:56:27 by nzhuzhle          #+#    #+#             */
/*   Updated: 2023/05/19 17:14:41 by nzhuzhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return(write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	return(write(1, s, len));
}
