/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 21:16:42 by llopez-d          #+#    #+#             */
/*   Updated: 2020/03/09 20:53:19 by llopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_arg_ctring(t_list *list)
{
    int count;
    char *save;
    
    count = 0;
    save = va_arg(list->args, char *);
    while (save[count])
    {
        write(1, &save[count], 1);
        count++;
    }
    return (count);
}