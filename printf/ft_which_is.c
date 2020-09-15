/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_which_is.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-d <llopez-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 20:48:48 by llopez-d          #+#    #+#             */
/*   Updated: 2020/08/24 23:58:09 by llopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_which_is(t_list *list)
{

	if (list->format[list->len] == 'c')
		return (ft_arg_char(list));
	else if (list->format[list->len] == 'd' || list->format[list->len] == 'i')
		return (ft_arg_int(list));
	else if (list->format[list->len] == 's')
		return (ft_arg_string(list));
	else if (list->format[list->len] == 'u')
		return (ft_arg_unsig(list));
	else if (list->format[list->len] == 'p')
		return (ft_arg_pointer(list));
	else if (list->format[list->len] == 'x' || list->format[list->len] == 'X')
		return (ft_arg_hex(list));
    return (0);
}