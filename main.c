/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 19:27:00 by llopez-d          #+#    #+#             */
/*   Updated: 2020/03/02 20:00:11 by llopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *str, ...);

int main()
{
	char *str = "Hola que tal %d\n";
	
	printf("%d\n",ft_printf(str, 25645485));
	//printf("Hola que tal %c\n", 'h');
	
    return 0;
}