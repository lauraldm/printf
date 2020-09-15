/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-d <llopez-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 19:21:41 by llopez-d          #+#    #+#             */
/*   Updated: 2020/09/08 00:06:52 by llopez-d         ###   ########.fr       */
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
	list.format = (char *)str;	
	while (str[list.len])
	{
		if (str[list.len] == '%')
		{
			list.len++;
			ft_flags_init(&list);
			if (str[list.len] == '%')
			{
				write(1, "%", 1);
				ret++;
			}
			else if (str[list.len] != '-')
			{
				if (str[list.len] == '0')
					list.zero = 1;
				ft_atoi_width(&list);
				if (str[list.len] == '.')
				{
					list.dot = 1;
					list.len++;
					ft_atoi_prec(&list);
				}
				if (list.width != 0)
					ret += ft_which_is(&list);
				else if (ft_is_a_flag(&list) == 1)
					ret += ft_which_is(&list);
			}
			else if (str[list.len] == '-')
			{
				list.neg = 1;
				list.len++;
				ft_atoi_width(&list);
				if (str[list.len] == '.')
				{
					list.dot = 1;
					list.len++;
					ft_atoi_prec(&list);
				}
				if (list.width != 0)
					ret += ft_which_is(&list);
				else if (ft_is_a_flag(&list) == 1)
					ret += ft_which_is(&list);
			}
			else 
				ret += ft_which_is(&list);
		}
		else
		{
			write(1, &str[list.len], 1);
			ret++;
		}
		list.len++;
	}
	va_end(list.args);
	return(ret);
}