/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briveiro <briveiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 22:25:57 by briveiro          #+#    #+#             */
/*   Updated: 2022/12/08 07:35:36 by briveiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// int	ft_printall(va_list args, char str)
// {
// 	void();
// }

int	ft_printf(char const *content, ...)
{
	va_list	args;
	int		i;
	int		result;

	i = 0;
	result = 0;
	va_start(args, content);
	while (content[i])
	{
		if (content[i] != '%')
			result += ft_putchar(content[i]);
		else
			result += ft_printall(args, content[++i]);
		i++;
	}
	va_end(args);
	return (result);
}

// int	main(void)
// {
// 	char *y;
// 	int	i;
// 	int	p;
// 	void *h;

// 	p = -2147483647;
// 	y = "Yepa";
// 	i = ft_printf("%s", "hola");
// 	printf("\n%s", "hola");
// 	return (0);
// }
