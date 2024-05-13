/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateos <damateos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 21:59:44 by damateos          #+#    #+#             */
/*   Updated: 2024/05/13 22:01:40 by damateos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int pf_putnbr(int n)
{
	long	ln;
	int		count;

	count = 0;
	if (n < 0)
	{
		count += pf_putchar('-');
		ln = (long)n * -1;
	}
	else
		ln = (long)n;
	if (ln > 9)
		count += pf_putnbr(ln / 10);
	count += pf_putchar('0' + ln % 10);
	return (count);
}
