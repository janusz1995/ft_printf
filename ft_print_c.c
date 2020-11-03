/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drina <drina@marvin.42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 21:46:57 by drina             #+#    #+#             */
/*   Updated: 2020/06/27 21:50:56 by drina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_print_c(char c, struct s_flags flag)
{
	if (flag.width && !flag.zero && !flag.minus)
		flag.num += wr_char_len(' ', flag.width - 1);
	else if (flag.zero && !flag.minus)
		flag.num += wr_char_len('0', flag.width - 1);
	flag.num += print_char(c);
	if (flag.minus)
		flag.num += wr_char_len(' ', flag.width - 1);
	return (flag.num);
}
