/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briveiro <briveiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 04:04:20 by briveiro          #+#    #+#             */
/*   Updated: 2022/12/08 07:42:43 by briveiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(size_t num, char *hexa)
{
	int	count;

	count = ft_hexa_count(num);
	if (num >= 16)
		ft_puthexa(num / 16, hexa);
	ft_putchar(hexa[num % 16]);
	return (count);
}

int	ft_hexa_count(size_t num)
{
	int	count;

	count = 1;
	while (num >= 16)
	{
		num = num / 16;
		count++;
	}
	return (count);
}

int	ft_putmem(unsigned long long num, char *hexa)
{
	size_t	count;

	count = 0;
	count += ft_putstr("0x");
	if (!num)
		count += ft_putchar('0');
	else
	{
		count += ft_hexa_count(num);
		ft_puthexa(num, hexa);
	}
	return (count);
}
