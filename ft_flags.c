/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drina <drina@marvin.42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 20:58:56 by drina             #+#    #+#             */
/*   Updated: 2020/06/29 18:24:33 by drina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

struct s_flags		ft_flags(void)
{
	struct s_flags flag;

	flag.minus = 0;
	flag.dot = 0;
	flag.zero = 0;
	flag.width = 0;
	flag.precision = 0;
	flag.len_list = 0;
	flag.num = 0;
	flag.sign_w = 0;
	return (flag);
}
