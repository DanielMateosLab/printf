/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateos <damateos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 18:36:39 by damateos          #+#    #+#             */
/*   Updated: 2024/04/15 22:51:03 by damateos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

int	ft_printf(char const *format_str, int count, ...);
int	ft_putunbr(unsigned int n);
int	ft_puthex(unsigned int n, int is_upper);
int	ft_putptr(void *ptr);

#endif
