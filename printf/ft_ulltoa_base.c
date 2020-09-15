/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulltoa_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-d <llopez-d@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 23:32:16 by llopez-d          #+#    #+#             */
/*   Updated: 2020/08/25 00:23:00 by llopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_getlen(unsigned long long n, int b)
{
	int i;

	i = 0;
	while (n > 0)
	{
		n /= b;
		i++;
	}
	return (i);
}

int	ft_fulfill(unsigned long long n, char *base, char *ptr, int l)
{
	int    b;

	b = ft_strlen(base);
	if (l == 0)
	{
		ptr[l] = base[n % b];
		return (0);
	}
	else
	{
		ptr[l] = base[n % b];
		return (ft_fulfill(n / b, base, ptr, --l));
	}	
}

char	*ft_ulltoa_base(unsigned long long n, char *base)
{
	char	*ptr;
	int		b;
	int		l;

	b = ft_strlen(base);
	l = ft_getlen(n, b);
	if (!(ptr = malloc(sizeof(char) * l + 1)))
		return (0);
	ptr[l] = '\0';
	ft_fulfill(n, base, ptr, l - 1);
	return (ptr);
}
