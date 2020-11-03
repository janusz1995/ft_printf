/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drina <drina@marvin.42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 16:03:51 by drina             #+#    #+#             */
/*   Updated: 2020/06/27 22:20:39 by drina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char		*ft_utoa(unsigned int number, int base, int flag)
{
	int		count;
	char	*list;

	count = num_base(number, base);
	list = (char *)malloc((count + 1) * sizeof(char));
	if (!list)
		return (NULL);
	list[count--] = '\0';
	if (number == 0)
		list[count] = '0';
	while (number != 0)
	{
		list[count] = "0123456789abcdef"[number % base];
		number = number / base;
		count--;
	}
	if (flag)
		while (list[++count] != '\0')
			list[count] = ft_toupper(list[count]);
	return (list);
}
