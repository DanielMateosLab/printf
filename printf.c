/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateos <damateos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 18:38:48 by damateos          #+#    #+#             */
/*   Updated: 2024/05/13 22:09:31 by damateos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int put_in_format(char format, va_list args)
{
	if (format == 'c' || format == '%')
		return (pf_putchar(va_arg(args, int)));
	else if (format == 's')
		return (pf_putstr(va_arg(args, char *)));
	else if (format == 'd' || format == 'i')
		return (pf_putnbr(va_arg(args, int)));
	else if (format == 'u')
		return (pf_putunbr(va_arg(args, unsigned int)));
	else if (format == 'p')
		return (pf_putptr(va_arg(args, void *)));
	else if (format == 'x')
		return (pf_puthex(va_arg(args, unsigned int), 0));
	else if (format == 'X')
		return (pf_puthex(va_arg(args, unsigned int), 1));
	return (0);
}

int	ft_printf(char const *format_str, int count, ...)
{
	int			i;
	va_list		args;

	if (!format_str)
		return (-1);
	i = 0;
	va_start(args, count);
	while (format_str[i])
	{
		if (format_str[i] == '%')
		{
			i++;
			count += put_in_format(format_str[i], args);
		}
		else
			count += pf_putchar(format_str[i]);
		i++;
	}
	va_end(args);
	return (count);
}
