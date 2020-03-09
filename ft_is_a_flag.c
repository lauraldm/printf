/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_a_flag.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 20:48:00 by llopez-d          #+#    #+#             */
/*   Updated: 2020/03/09 20:48:15 by llopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	is_a_flag(const char *str, t_list *list)
{
	//mientras que no sea un argumento, detectame el tipo de flag que es y almacenamelo para luego
	//proceder a hacer lo que simbolice ese flag
	if (!(str[list->len] == 'c' || str[list->len] == 's' || str[list->len] == 'p' || str[list->len] == 'd'
	|| str[list->len] == 'i' || str[list->len] == 'u' || str[list->len] == 'x' || str[list->len] == 'X'))
	{
		return (1);
	}
	return (0);
}