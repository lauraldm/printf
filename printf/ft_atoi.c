/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-d <llopez-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 18:56:21 by llopez-d          #+#    #+#             */
/*   Updated: 2020/09/07 19:05:59 by llopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_atoi_width(t_list *list)
{
	while (list->format[list->len] >= '0' && list->format[list->len] <= '9')
	{
		list->width = (list->width * 10) + (list->format[list->len] - 48);
		list->len++;
	}
	return (0);
}

int	ft_atoi_prec(t_list *list)
{
	while (list->format[list->len] >= '0' && list->format[list->len] <= '9')
	{
		list->prec = (list->prec * 10) + (list->format[list->len] - 48);
		list->len++;
	}
	return (0);
}