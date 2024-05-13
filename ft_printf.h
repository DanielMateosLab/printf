/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateos <damateos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 18:36:39 by damateos          #+#    #+#             */
/*   Updated: 2024/05/13 22:23:53 by damateos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

int	ft_printf(char const *format_str, int count, ...);
int	pf_putunbr(unsigned int n);
int	pf_puthex(unsigned int n, int is_upper);
int	pf_putptr(void *ptr);
int	pf_putchar(char c);
int	pf_putstr(char *s);
int	pf_putnbr(int n);

#endif
