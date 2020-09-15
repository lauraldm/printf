/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-d <llopez-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 21:16:42 by llopez-d          #+#    #+#             */
/*   Updated: 2020/09/09 20:42:03 by llopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_arg_string(t_list *list)
{
    /*char	*str;
	char	*str2;
	int		i;
	int		rest;
	int		aux;

	aux = 0;
	i = 0;
	str = va_arg(list->args, char*);
	if (list->prec != 0 && list->prec < ft_strlen(str))
	{
		str2 = malloc(sizeof(char) * list->prec + 1);
		while (i < list->prec)
			str2[i++] = *str++;
		str2[list->prec] = '\0';
		str = str2;
	}
	i = 0;	
	if (list->width != 0 && list->neg == 1)
	{			
		while (str[i])
			write(1, &str[i++], 1);
		while(i < list->width)
			write(1, " ", 1) && i++;
	}
	else if (list->width != 0 && list->neg == 0)
	{
		rest = list->width - ft_strlen(str);
		while (rest-- > 0)
			write (1, " ", 1) && i++;
		while (str[aux])
			write(1, &str[aux++], 1);
	}
	else
	{
		while (str[i])
			write(1, &str[i++], 1);
	}
	free(str2);
	return (i + aux);
}*/
	char *str;
    char *str2;
    int i;
    int aux;
    int res;
    aux = 0; /*solo la utilizamos para sumar el string*/
    str = va_arg(list->args, char*);
    i = 0;
    if (list->prec != 0 && list->prec < ft_strlen(str))
    {
        str2 = malloc(sizeof(char) * list->prec + 1);
        while (i < list->prec)
            str2[i++] = *str++;
        str2[list->prec] = '\0';
        str = str2;
    }
    i = 0;
    if (list->width != 0 && list->neg == 1)
    {
        while (str[i])
            write(1, &str[i++], 1);
        while(i < list->width)
			write(1, " ", 1) && i++;
    }
    else if (list->width != 0 && list->neg == 0)
    {
        res = list->width - ft_strlen(str);
        while (res-- > 0)
		    write(1, " ", 1) && i++;
        while (str[aux])
            write(1, &str[aux++], 1);
    }
    else
    {
        while (str[i])
            write(1, &str[i++], 1);
    }
	if (list->prec != 0 && list->prec < ft_strlen(str))
		free(str2);
    return (i + aux);
}
