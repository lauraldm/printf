/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-d <llopez-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/19 18:47:00 by llopez-d          #+#    #+#             */
/*   Updated: 2020/08/28 23:55:19 by llopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_arg_pointer(t_list *list)
{
	unsigned long long	pointer;
	char				*address;
	int					i;
	int					rest;
	int					aux;

	pointer = va_arg(list->args, unsigned long long);
	address = ft_ulltoa_base(pointer, "0123456789abcdef");

	i = 0;
	aux = 0;
	if (list->width != 0 && list->neg == 1)
	{
		write(1, "0x", 2);
		while (address[i])
			write(1, &address[i++], 1);
		while(i + 2 < list->width)
		{	
			write(1, " ", 1);
			i++;
		}
	}
	else if (list->width != 0 && list->neg == 0)
	{
		rest = list->width - (ft_strlen(address) + 2);
		while (rest-- > 0)
		{
			write (1, " ", 1);
			i++;
		}
		write(1, "0x", 2);
		while (address[aux])
			write(1, &address[aux++], 1);
	}
	else
	{
		write(1, "0x", 2);
		while (address[i])
			write(1, &address[i++], 1);
	}
	free(address);
	return (i + 2 + aux);
}