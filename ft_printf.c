/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briveiro <briveiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 22:25:57 by briveiro          #+#    #+#             */
/*   Updated: 2022/12/08 08:05:36 by briveiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// int	ft_printall(va_list args, char str)
// {
// 	void();
// }

int	ft_printf(char const *content, ...)
{
	int		count;
	int		result;
	va_list	args;

	va_start(args, content);
	count = 0;
	result = 0;
	while (content[count])
	{
		if (content[count] == '%')
			result += ft_printall(args, content[++count]);
		else
			result += ft_putchar(content[count]);
		count++;
	}
	va_end(args);
	return (result);
}

int	main(void)
{
	char *y;
	int	i;
	int	p;
	void *h;

	ft_printf("%c%c", 'a', 'b');
	// p = -2147483647;
	// y = "Yepa";
	// i = ft_printf("%s", "hola");
	// printf("\n%s", "hola");
	return (0);
}
