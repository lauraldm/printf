/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-d <llopez-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 20:45:04 by llopez-d          #+#    #+#             */
/*   Updated: 2020/09/07 19:03:48 by llopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_flags_init(t_list *list)
{
	list->neg = 0;
	list->zero = 0;
	list->width = 0;
	list->dot = 0;
	list->prec = 0;

}