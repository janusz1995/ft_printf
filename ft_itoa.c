/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drina <drina@marvin.42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 16:40:03 by drina             #+#    #+#             */
/*   Updated: 2020/06/27 22:17:21 by drina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int		num(int c)
{
	int		count;

	count = 0;
	if (c == 0)
		return (1);
	if (c < 0)
		count++;
	while (c != 0)
	{
		c = c / 10;
		count++;
	}
	return (count);
}

int				ft_itoa(int c, struct s_flags flag)
{
	int			count;
	char		*list;
	long long	number;

	number = (long long)c;
	count = num(number);
	list = (char *)malloc((count + 1) * sizeof(char));
	if (!list)
		return (0);
	if (number < 0)
	{
		list[0] = '-';
		number = -number;
	}
	list[count--] = '\0';
	while (number > 9)
	{
		list[count] = (char)((number % 10) + '0');
		number = number / 10;
		count--;
	}
	list[count] = (char)number + '0';
	count = print_d_i(list, flag);
	free(list);
	return (count);
}
