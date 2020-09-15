/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_unsig.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-d <llopez-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 19:45:49 by llopez-d          #+#    #+#             */
/*   Updated: 2020/09/03 20:19:43 by llopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_arg_unsig(t_list *list)
{
    unsigned int	nbr;
    char			*save_int;
    int				i;
	int				rest;
	int				aux;

    i = 0;
	aux = 0;
    nbr = va_arg(list->args, unsigned int);
    save_int = (char *)ft_utoa(nbr);
    if (list->width != 0 && list->neg == 1)
	{
		while (save_int[i])
			write(1, &save_int[i++], 1);
		while(i < list->width)
		{
			write(1, " ", 1);
			i++;
		}
	}
	else if (list->width != 0 && list->neg == 0)
	{
		rest = list->width - ft_strlen(save_int);
		while (rest-- > 0)
		{
			if (list->zero == 1)
				write(1, "0", 1);
			else if (list->zero == 0)
				write(1, " ", 1);
			i++;
		}
		while (save_int[aux])
			write(1, &save_int[aux++], 1);
	}
	else
	{
		while (save_int[i])
			write(1, &save_int[i++], 1);
	}
    free(save_int);
	return (i + aux);
}