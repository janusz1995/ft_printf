/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drina <drina@marvin.42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 20:42:31 by drina             #+#    #+#             */
/*   Updated: 2020/06/29 19:37:13 by drina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_width(const char **line, va_list ptr, struct s_flags *flag)
{
	int width;

	width = 0;
	if (**line == '*')
	{
		width = va_arg(ptr, int);
		if (width < 0)
		{
			flag->minus = 1;
			width = -width;
		}
	}
	else if (ft_isdigit(**line))
	{
		width = ft_atoi(*line);
		while (ft_isdigit(*(*line + 1)))
			(*line)++;
	}
	return (width);
}
