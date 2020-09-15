/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-d <llopez-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 23:39:57 by llopez-d          #+#    #+#             */
/*   Updated: 2020/09/03 20:02:14 by llopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_arg_hex(t_list *list)
{
	unsigned int    n;
	char            *num;
	int             i;
	int				rest;
	int				aux;

	n = va_arg(list->args, unsigned int);
	aux = 0;
	i = 0;
	if (list->format[list->len] == 'x')
	{
		num = ft_utoa_base(n, "0123456789abcdef");
		if (list->width !=0 && list->neg == 1)
		{
			while (num[i])
				write(1, &num[i++], 1);
			while (i < list->width)
			{
				write(1, " ", 1);
				i++;
			}
		}
		else if (list->width != 0 && list->neg == 0)
		{
			rest = list->width - ft_strlen(num);
			while (rest-- > 0)
			{
				write (1, " ", 1);
				i++;
			}
			while (num[aux])
				write(1, &num[aux++], 1);
		}
		else
		{
			while (num[i])
				write(1, &num[i++], 1);
		}
	}
	else if (list->format[list->len] == 'X')
	{
		num = ft_utoa_base(n, "0123456789ABCDEF");
		if (list->width !=0 && list->neg == 1)
		{
			while (num[i])
				write(1, &num[i++], 1);
			while (i < list->width)
			{
				write(1, " ", 1);
				i++;
			}
		}
		else if (list->width != 0 && list->neg == 0)
		{
			rest = list->width - ft_strlen(num);
			while (rest-- > 0)
			{
				write (1, " ", 1);
				i++;
			}
			while (num[aux])
				write(1, &num[aux++], 1);
		}
		else
		{
			while (num[i])
				write(1, &num[i++], 1);
		}
	}
	free (num);
	return (i + aux);
}