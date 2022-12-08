/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dec.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briveiro <briveiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 05:09:07 by briveiro          #+#    #+#             */
/*   Updated: 2022/12/08 07:43:43 by briveiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int		num;
	int		count;
	int		tneg;

	num = n;
	tneg = 0;
	if (num < 0)
	{
		ft_putchar('-');
		num = num * -1;
		tneg = 1;
	}
	count = ft_dec_count(num);
	if (num > 9)
	{
		ft_putnbr(num / 10);
		ft_putchar(num % 10 + '0');
	}
	else
		ft_putchar(num + '0');
	if (tneg == 1)
		return (count + 1);
	return (count);
}

int	ft_dec_count(long num)
{
	int	count;

	count = 1;
	while (num >= 10)
	{
		num = num / 10;
		count++;
	}
	return (count);
}
