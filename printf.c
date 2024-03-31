/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateos <damateos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 18:38:48 by damateos          #+#    #+#             */
/*   Updated: 2024/02/24 19:03:17 by damateos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char	*arg_to_str(va_list args, char specifier)
{
	(void)args;
	char	*str;

	str = ft_calloc(2, sizeof(char));
	if (!str)
		return (NULL);
	str[0] = '%';
	str[1] = specifier;
	return (str);
}

t_va_state *init_va_state()
{
	t_va_state	*va_state;

	va_state = malloc(sizeof(t_va_state));
	if (!va_state)
		return (NULL);
	va_state->i = 0;
	va_state->j = 0;
	va_state->result = malloc(1 * sizeof(char));
	if (!va_state->result)
		return (NULL);
	va_state->result[0] = '\0';
	return (va_state);
}

int	ft_printf(char const *format_str, int count, ...)
{
	t_va_state *s;

	s = init_va_state();
	if (!s)
		return (0);
	va_start(s->args, count);
	while (format_str[s->i])
	{
		if (format_str[s->i] == '%')
		{
			s->result = ft_strjoin(s->result, ft_substr(format_str, s->j, s->i - s->j));
			if (!s->result)
				return (0);
			s->result = ft_strjoin(s->result, arg_to_str(s->args, format_str[++s->i]));
			if (!s->result)
				return (0);
			s->j = ++s->i;
			if (!s->result)
				return (0);
		}
		else
			s->i++;
	}
	s->result = ft_strjoin(s->result, ft_substr(format_str, s->j, s->i - s->j));
	if (!s->result)
		return (0);
	va_end(s->args);
	return (write(1, s->result, ft_strlen(s->result)));
}

//	va_arg(args, int);