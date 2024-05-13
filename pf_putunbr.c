/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateos <damateos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:52:27 by damateos          #+#    #+#             */
/*   Updated: 2024/05/13 22:26:31 by damateos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	pf_putunbr(unsigned int n)
{
	int	count;

	count = 0;
	if (n < 10)
		count += pf_putchar('0' + n);
	else
	{
		count += pf_putunbr(n / 10);
		count += pf_putchar('0' + n % 10);
	}
	return (count);
}
