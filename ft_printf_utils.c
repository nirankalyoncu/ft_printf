/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalyonc <nkalyonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 12:53:28 by nkalyonc          #+#    #+#             */
/*   Updated: 2022/04/21 14:05:19 by nkalyonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printstr(char *str)
{
	int	len;

	len = 0;
	if (!str)
	{
		ft_printstr("(null)");
		return (6);
	}
	while (*str)
	{
		len += ft_putchar(*str);
		str++;
	}
	return (len);
}
