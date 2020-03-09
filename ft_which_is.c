/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_which_is.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 20:48:48 by llopez-d          #+#    #+#             */
/*   Updated: 2020/03/09 20:54:33 by llopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_playFlags(t_list *list)
{

	if (list->format[list->len] == 'c')
		return (ft_argChar(list));
	else if (list->format[list->len] == 'd' || list->format[list->len] == 'i')
		return (ft_argInt(list));
	else if (list->format[list->len] == 's')
		return (ft_argString(list));
	else if (list->format[list->len] == 'u')
		return (ft_argUnsig(list));
    return (0);
}