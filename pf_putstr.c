/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateos <damateos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 21:47:30 by damateos          #+#    #+#             */
/*   Updated: 2024/05/13 21:55:44 by damateos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int pf_putstr(char *s)
{
	int count;

	count = 0;
	while (*s)
		count += pf_putchar(*s++);
	return (count);
}
