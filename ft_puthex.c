/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateos <damateos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 22:07:03 by damateos          #+#    #+#             */
/*   Updated: 2024/04/15 23:03:06 by damateos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_puthex(unsigned int n, int is_upper)
{
	int		count;
	char	*base;

	count = 0;
	if (is_upper)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n < 16)
		return (ft_putchar_fd(base[n], 1));
	else
	{
		count += ft_puthex(n / 16, is_upper);
		count += ft_putchar_fd(base[n % 16], 1);
	}
	return (count);
}
