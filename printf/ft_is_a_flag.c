/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_a_flag.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-d <llopez-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 20:48:00 by llopez-d          #+#    #+#             */
/*   Updated: 2020/03/11 19:26:07 by llopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_is_a_flag(t_list *list)
{
	//mientras que no sea un argumento, detectame el tipo de flag que es y almacenamelo para luego
	//proceder a hacer lo que simbolice ese flag
	if (!(list->format[list->len] == 'c' || list->format[list->len] == 's' || list->format[list->len] == 'p' || list->format[list->len] == 'd'
	|| list->format[list->len] == 'i' || list->format[list->len] == 'u' || list->format[list->len] == 'x' || list->format[list->len] == 'X'))
	{
		return (1);
	}
	return (0);
}