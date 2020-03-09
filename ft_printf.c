/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 19:21:41 by llopez-d          #+#    #+#             */
/*   Updated: 2020/03/09 20:54:40 by llopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int ret;
	t_list	list;
	
	va_start(list.args, str);
	list.len = 0;
	ret = 0;
		
	while (str[list.len])
	{
		if (str[list.len] != '%')
		{
			write(1, &str[list.len], 1);
			ret++;
		}
		else if (str[list.len] == '%')
		{
			list.len++;
			if (is_aFlag(str, &list) == 1)
			{
				ft_initFlags(list);
				ft_playFlags(list);
			}
			else if (str[list.len] == '%')
			{
				write(1, "%", 1);
				ret++;
			}
		}
		list.len++;
	}
	va_end(list.args);
	return(ret);
}