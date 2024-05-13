/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateos <damateos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 22:12:58 by damateos          #+#    #+#             */
/*   Updated: 2024/05/13 22:26:00 by damateos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	pf_putptr(void *ptr)
{
	unsigned long long	address;
	int					count;

	count = 0;
	address = (unsigned long long)ptr;
	count += pf_putstr("0x");
	count += pf_puthex(address, 0);
	return (count);
}
