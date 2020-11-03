/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wr_char_len.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drina <drina@marvin.42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 22:07:38 by drina             #+#    #+#             */
/*   Updated: 2020/06/27 22:07:43 by drina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		wr_char_len(int c, int len)
{
	int count_wr;

	count_wr = 0;
	while (len > 0)
	{
		count_wr += print_char(c);
		len--;
	}
	return (count_wr);
}
