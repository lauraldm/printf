/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 19:27:00 by llopez-d          #+#    #+#             */
/*   Updated: 2020/09/15 20:33:06 by llopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *str, ...);

int main()
{
	//comprobación string
	/*char *i;
	char *m;

	i = "LALA";
	m = "CACACULO";
	printf("%d\n",ft_printf("Nuestra función %4.3s\n%-7.9s\n", i, m));
	printf("%d\n", printf("Nuestra función %4.3s\n%-7.9s\n", i, m));*/

	//Comprobación entero
	int s;
	int	l;

	s = -100;
	l = -112;
	printf("%d\n", ft_printf("Nuestra %-3d%08d", s, l));
	printf("%d\n", printf("Nuestra %-3d%08d", s, l));

	//Comprobación char
	/*char i;
	char m;

	i = 'i';
	m = 'm';
	printf("%d\n", ft_printf("Nuestra función %-2c\n %2c", i, m));
	printf("%d\n", printf("Nuestra función %-2c\n %2c", i, m));*/

	//Comprobación Hexadecimal
	/*unsigned int i;
	unsigned int m;

	i = 2564;
	m = 3333;
	//printf("%d\n", ft_printf("Nuestra función %-5x\n %-5x", i, m));
	printf("%d\n", printf("Nuestra función %-5x\n %-5x", i, m));*/

	//Comprobación pointer
	/*char *i;
	char *m;

	//i = &i;
	//m = &m;
	printf("%d\n",ft_printf("Nuestra función %-18p\n %18p\n", &i, &m));
	printf("%d\n", printf("Nuestra función %-18p\n %18p\n", &i, &m));*/

	//Comprobación unsigned int
	/*unsigned int i;
	unsigned int	m;

	i = -122;
	m = 124;
	printf("%d\n", ft_printf("Nuestra función %-20u\n %020u", i, m));
	printf("%d\n", printf("Nuestra función %-20u\n %020u", i, m));*/

    return 0;
}