/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: briveiro <briveiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 22:25:57 by briveiro          #+#    #+#             */
/*   Updated: 2022/12/07 23:16:36 by briveiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *content, ...)
{
	va_list	args;
	int		i;
	int		result;

	va_start(args, content);
	i = 0;
	while (content[i])
	{
		if (content[i] != '%')
			result = ft_putchar(content[i]);
		else
			result = ft_printall(args, content[++i]);
	i++;
	}
	va_end(args);
	return (0);
}

// int	main(void)
// {
// 	char *saludo = "%";

// 	ft_printf(saludo);

// 	return (0);
// }