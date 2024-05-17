/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateos <damateos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 18:38:48 by damateos          #+#    #+#             */
/*   Updated: 2024/05/17 17:09:40 by damateos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_in_format(char format, va_list *args)
{
	if (format == '%')
		return (pf_putchar('%'));
	else if (format == 'c')
		return (pf_putchar(va_arg(*args, int)));
	else if (format == 's')
		return (pf_putstr(va_arg(*args, char *)));
	else if (format == 'd' || format == 'i')
		return (pf_putnbr(va_arg(*args, int)));
	else if (format == 'u')
		return (pf_putunbr(va_arg(*args, unsigned int)));
	else if (format == 'p')
		return (pf_putptr(va_arg(*args, void *)));
	else if (format == 'x')
		return (pf_puthex(va_arg(*args, unsigned int), 0));
	else if (format == 'X')
		return (pf_puthex(va_arg(*args, unsigned int), 1));
	return (pf_putchar(format));
}

int	ft_printf(char const *format_str, ...)
{
	int			i;
	va_list		args;
	int			count;
	int			iter_res;

	if (!format_str)
		return (-1);
	count = 0;
	i = 0;
	iter_res = 0;
	va_start(args, format_str);
	while (format_str[i])
	{
		if (format_str[i] != '%')
			iter_res = pf_putchar(format_str[i++]);
		else if (format_str[++i])
			iter_res = put_in_format(format_str[i++], &args);
		if (iter_res < 0)
			return (-1);
		else
			count += iter_res;
	}
	va_end(args);
	return (count);
}
