/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-d <llopez-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 21:09:30 by llopez-d          #+#    #+#             */
/*   Updated: 2020/09/08 22:22:27 by llopez-d         ###   ########.fr       */
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
	int			neg;
	int         zero;
	int         width;
	int         dot;
	int         prec;
	int         len;
}               t_list;

int     ft_printf(const char *str, ...);
int     ft_arg_char(t_list *list);
int     ft_arg_int(t_list *list);
int     ft_arg_string(t_list *list);
int     ft_arg_unsig(t_list *list);
int     ft_arg_pointer(t_list *list);
int     ft_arg_hex(t_list *list);
void    ft_flags_init(t_list *list);
int     ft_is_a_flag(t_list *list);
int     ft_which_is(t_list *list);
int     ft_atoi_width(t_list *list);
int		ft_atoi_prec(t_list *list);
char    *ft_itoa(int nbr);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
char    *ft_utoa(unsigned int nbr);
char    *ft_ulltoa_base(unsigned long long n, char *base);
char    *ft_utoa_base(unsigned long long n, char *base);

#endif