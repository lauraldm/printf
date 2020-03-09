/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 21:00:02 by llopez-d          #+#    #+#             */
/*   Updated: 2020/03/09 20:46:32 by llopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_putchar(char n)
{
    write(1, &n, 1);
}

void    ft_putnbr(nbr)
{
    if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr(nbr * (-1));
	}
	else
	{
		if (nbr >= 10)
			ft_putnbr(nbr / 10);
		ft_putchar(nbr % 10 + 48);
	}
}
int ft_arg_int(t_list *list)
{
    int nbr;
    int len;

    nbr = va_arg(list->args, int);
    ft_putnbr(nbr);
    len = 0;
    if (nbr == 0)
        len++;
    if (nbr < 0)
        len++;
    while (nbr != 0)
    {
        nbr = nbr / 10;
        ++len;
    }
    return (len);
}