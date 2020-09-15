/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 19:08:49 by llopez-d          #+#    #+#             */
/*   Updated: 2020/09/15 20:26:19 by llopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_arg_int(t_list *list)
{
    int		nbr;
    char	*save_int;
	char	*save_aux;
    int		i;
	int		rest;
	int		aux;

    i = 0;
	aux = 0;
    nbr = va_arg(list->args, int);
    save_int = (char *)ft_itoa(nbr);
	if (list->prec >= ft_strlen(save_int))
	{
		rest = list->prec - ft_strlen(save_int);
		if (!(save_aux = malloc(sizeof(char) * list->prec + 1)))
			return (0);
		if (save_int[0] == '-')
		{
			save_aux[0] = save_int[0];
			aux++;
			rest++;
		}
		while (rest--)
		{
			save_aux[aux] = '0';
			aux++;
		}
		if (save_int[0] == '-')
			i = 1;
		while (save_int[i])
		{
			save_aux[aux] = save_int[i];
			aux++;
			i++;
		}
		save_aux[aux] = '\0';
		save_int = save_aux;
	}
	i = 0;
	aux = 0;
    if (list->width != 0 && list->neg == 1)
	{
		while (save_int[i])
			write(1, &save_int[i++], 1);
		while (i < list->width)
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
			if (list->prec != 0)
			{
				if (list->prec <= ft_strlen(save_int))
					list->zero = 0;
				if (save_int[aux] == '-' && list->zero == 1)
					write(1, &save_int[aux++], 1);
				if (list->zero == 1)
					write(1, "0", 1);
				else if (list->zero == 0)
					write(1, " ", 1);
				i++;
			}
			else
			{
				if (save_int[aux] == '-' && list->zero == 1)
					write(1, &save_int[aux++], 1);
				if (list->zero == 1)
					write(1, "0", 1);
				else if (list->zero == 0)
					write(1, " ", 1);
				i++;
			}
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