/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drina <drina@marvin.42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/03 00:35:12 by drina             #+#    #+#             */
/*   Updated: 2020/06/29 20:53:45 by drina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_hex(va_list ptr, int base, int flag, struct s_flags flags)
{
	char	*list;

	list = ft_utoa(va_arg(ptr, unsigned int), base, flag);
	flags.len_list = ft_strlen(list);
	if (flags.precision == 0 && flags.dot && list[0] == '0')
		flags.len_list--;
	if (flags.width && !flags.minus && !flags.zero && !flags.dot)
		flags.num += wr_char_len(' ', flags.width - flags.len_list);
	else if (flags.width && (flags.dot || !flags.zero) && !flags.minus)
		flags.num += wr_char_len(' ', flags.precision >= flags.len_list
		? flags.width - flags.precision : flags.width - flags.len_list);
	if (flags.zero && !flags.minus && !flags.dot && flags.width)
		flags.num += wr_char_len('0', flags.width - flags.len_list);
	if (flags.dot)
		flags.num += wr_char_len('0', flags.precision - flags.len_list);
	flags.num += print_str(list, flags.len_list);
	if (flags.minus)
		flags.num += wr_char_len(' ', flags.precision >= flags.len_list
		? flags.width - flags.precision : flags.width - flags.len_list);
	free(list);
	return (flags.num);
}
