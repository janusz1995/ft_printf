/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drina <drina@marvin.42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 17:41:27 by drina             #+#    #+#             */
/*   Updated: 2020/07/02 00:47:24 by drina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_pointer(unsigned long int number, struct s_flags flag)
{
	int		count;
	char	*list;

	count = 2 + num_base(number, 16);
	list = (char *)malloc((count + 1) * sizeof(char));
	if (!list)
		return (0);
	list[count--] = '\0';
	if (number == 0)
		list[count--] = '0';
	while (number != 0)
	{
		list[count] = "0123456789abcdef"[number % 16];
		number = number / 16;
		count--;
	}
	list[count--] = 'x';
	list[count] = '0';
	count = print_pointer(list, flag);
	free(list);
	return (count);
}
