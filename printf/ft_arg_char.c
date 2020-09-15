/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-d <llopez-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 20:58:44 by llopez-d          #+#    #+#             */
/*   Updated: 2020/09/03 19:47:17 by llopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_arg_char(t_list *list)
{
    char c;
	int i;
	int rest;

	i = 0;
	c = va_arg(list->args, int);
	if (list->width != 0 && list->neg == 1)
	{
		write(1, &c, 1);
		while (i++ < list->width)
			write(1, " ", 1);
	}
	else if (list->width != 0 && list->neg == 0)
	{
		rest = list->width - 1;
		while (rest-- > 0)
		{
			write (1, " ", 1);
			i++;
		}
		write(1, &c, 1);
		i++;
	}
	else
		write(1, &c, 1);
	return (i);
}