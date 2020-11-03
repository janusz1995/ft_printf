/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_c_and_str.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drina <drina@marvin.42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 20:56:00 by drina             #+#    #+#             */
/*   Updated: 2020/06/29 22:04:32 by drina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		print_str(char *s, int len)
{
	if (len == 0)
		return (0);
	return (write(1, s, len));
}

int		print_char(char c)
{
	return (write(1, &c, 1));
}
