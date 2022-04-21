/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkalyonc <nkalyonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 12:53:21 by nkalyonc          #+#    #+#             */
/*   Updated: 2022/04/21 12:53:22 by nkalyonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_ptr(unsigned long long p)
{
	if (p >= 16)
	{
		ft_put_ptr(p / 16);
		ft_put_ptr(p % 16);
	}
	else
	{
		if (p > 9)
			ft_putchar(p - 10 + 'a');
		else
			ft_putchar(p + 48);
	}
}

int	ft_ptrlen(unsigned long long p)
{
	int	len;

	len = 0;
	while (p != 0)
	{
		p /= 16;
		len++;
	}
	return (len);
}

int	ft_print_ptr(unsigned long long p)
{
	int	len;

	len = 0;
	if (p == 0)
	{
		len += ft_printstr("0x0");
		return (len);
	}
	len += ft_printstr("0x");
	len += ft_ptrlen(p);
	ft_put_ptr(p);
	return (len);
}
