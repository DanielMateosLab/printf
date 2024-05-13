/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateos <damateos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 18:38:48 by damateos          #+#    #+#             */
/*   Updated: 2024/05/13 21:45:44 by damateos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

/** printf Modifiers Documentation:
 * c - Character
 * s - String
 * d - Signed decimal integer
 * i - Signed decimal integer (same as 'd')
 * u - Unsigned decimal integer
 * p - Pointer (hexadecimal address)
 * x - Hexadecimal (lowercase)
 * X - Hexadecimal (uppercase)
 * % - Percent sign
*/

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
			// TODO: write implementations for putchar putstr putnbr that return the number of characters printed
			i++;
			if (format_str[i] == 'c' || format_str[i] == '%')
				count += pf_putchar(va_arg(args, int));
			else if (format_str[i] == 's')
				count += ft_putstr(va_arg(args, char *));
			else if (format_str[i] == 'd' || format_str[i] == 'i')
				count += ft_putnbr(va_arg(args, int));
			else if (format_str[i] == 'u')
				count += ft_putunbr(va_arg(args, unsigned int));
			else if (format_str[i] == 'p')
				count += ft_putptr(va_arg(args, void *));
			else if (format_str[i] == 'x')
				count += ft_puthex(va_arg(args, unsigned int), 0);
			else if (format_str[i] == 'X')
				count += ft_puthex(va_arg(args, unsigned int), 1);
		}
		else
			count += pf_putchar(format_str[i]);
		i++;
	}
	va_end(args);
	return (count);
}
