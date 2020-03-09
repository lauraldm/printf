/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 21:09:30 by llopez-d          #+#    #+#             */
/*   Updated: 2020/03/09 20:53:52 by llopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

typedef struct  s_list
{
    va_list     args;
    char        *format;
    int         zero;
    int         width;
    int         dot;
    int         prec;
    int         len;
}               t_list;

int     ft_printf(const char *str, ...);
int     ft_arg_char(t_list *list);
int     ft_arg_cnt(t_list *list);
int     ft_arg_ctring(t_list *list);
void    ft_flags_init(t_list *list);
int     ft_is_a_flag(t_list *list);
int     ft_which_is(t_list *list);

#endif