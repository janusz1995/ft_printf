/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drina <drina@marvin.42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 20:42:14 by drina             #+#    #+#             */
/*   Updated: 2020/06/29 18:38:11 by drina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_precision(const char **line, va_list ptr, struct s_flags *flag)
{
	int precision;

	precision = 0;
	flag->dot = 1;
	if (*(*line + 1) == '*')
	{
		(*line)++;
		precision = va_arg(ptr, int);
		if (precision < 0)
			flag->dot = 0;
	}
	else if (ft_isdigit(*(*line + 1)))
	{
		(*line)++;
		precision = ft_atoi(*line);
		while (ft_isdigit(*(*line + 1)))
			(*line)++;
	}
	return (precision);
}
