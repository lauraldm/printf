/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-d <llopez-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 19:46:22 by llopez-d          #+#    #+#             */
/*   Updated: 2020/09/03 20:15:11 by llopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_getlen(unsigned int n)
{
	int i;

	i = 0;
	if (n == 0)
		i++;
	//if (n < 0)
	//	i++;
	while (n != 0)
	{
		n = n / 10;
		++i;
	}
	return (i);
}

static char	*ft_fulfill(unsigned int n, int i)
{
	char            *str;
	unsigned int	nbr;
    unsigned int    max;

	nbr = n;
    max = 4294966996;
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i] = '\0';
	i--;
    if (nbr < 0)
        nbr = max + nbr;
	while (nbr > 9)
	{
		str[i--] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	if (nbr < 10)
		str[i--] = (nbr % 10) + '0';
	return (str);
}

char	*ft_utoa(unsigned int n)
{
	char	*ptr;
	int		i;

	/*if (n == -2147483648)
	{
		if (!(ptr = (char *)malloc(sizeof(char) * 12)))
			return (NULL);
		ft_strlcpy(ptr, "-2147483648", 12);
		return (ptr);
	}*/
	i = ft_getlen(n);
	ptr = ft_fulfill(n, i);
	return (ptr);
}