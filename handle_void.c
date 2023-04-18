/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_void.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlongo <mlongo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:25:28 by mlongo            #+#    #+#             */
/*   Updated: 2023/04/18 17:57:23 by mlongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_hexa(int n, char *hexa, int *i)
{
	if (n < 16)
	{
		handle_c(hexa[n]);
		*i = *i + 1;
	}
	else
	{
		print_hexa(n / 16, hexa, i);
		print_hexa(n % 16, hexa, i);
	}
}

int	handle_void(void *p)
{
	char	*hexa;
	int		number;
	int		i;

	i = 0;
	number = (int)p;
	hexa = "0123456789abcdef";
	write(1, "0x10", 4);
	print_hexa(number, hexa, &i);
	return (i + 4);
}
