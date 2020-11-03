/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sym.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drina <drina@marvin.42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 22:13:23 by drina             #+#    #+#             */
/*   Updated: 2020/06/27 22:13:47 by drina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int				check_sym(char **list)
{
	int count;

	count = 0;
	if (*list[0] == '-')
		count += print_char(*list[0]);
	if ((*list)[0] == '0' && (*list)[1] == 'x')
		count += print_char('0') + print_char('x');
	(*list) += count;
	return (count);
}
