/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: default <default@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 18:38:48 by damateos          #+#    #+#             */
/*   Updated: 2024/04/15 21:38:29 by default          ###   ########.fr       */
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
*/

int	ft_printf(char const *format_str, int count, ...)
{
	int			i;
	va_list		args;

	if (!format_str)
		return (-1);
	i = 0;
	va_start(args, count);
	return (0);
}

//	va_arg(args, int);