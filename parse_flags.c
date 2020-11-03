/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drina <drina@marvin.42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 22:02:05 by drina             #+#    #+#             */
/*   Updated: 2020/06/29 22:00:59 by drina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

struct s_flags			parse_flags(const char **line, va_list ptr)
{
	struct s_flags flag;

	flag = ft_flags();
	(*line)++;
	while (**line && spec(**line))
	{
		if (**line == '-')
			flag.minus = 1;
		else if (**line == '0' && !flag.minus)
			flag.zero = 1;
		else if (**line == '.' && !flag.dot)
			flag.precision = ft_precision(&(*line), ptr, &flag);
		else if (ft_isdigit(**line) || **line == '*')
			flag.width = ft_width(&(*line), ptr, &flag);
		else
			break ;
		(*line)++;
	}
	return (flag);
}
