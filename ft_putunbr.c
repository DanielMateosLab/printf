/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateos <damateos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:52:27 by damateos          #+#    #+#             */
/*   Updated: 2024/04/15 23:01:00 by damateos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "printf.h"

int	ft_putunbr(unsigned int n)
{
	int	count;

	count = 0;
	if (n < 10)
		count += ft_putchar_fd('0' + n, 1);
	else
	{
		count += ft_putunbr(n / 10);
		count += ft_putchar_fd('0' + n % 10, 1);
	}
	return (count);
}
