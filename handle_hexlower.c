/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_hexlower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlongo <mlongo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:25:28 by mlongo            #+#    #+#             */
/*   Updated: 2023/04/18 17:39:23 by mlongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_hexa2(int n, char *hexa, int *i)
{
	if (n < 16)
	{
		handle_c(hexa[n]);
		*i = *i + 1;
	}
	else
	{
		print_hexa2(n / 16, hexa, i);
		print_hexa2(n % 16, hexa, i);
	}
}

int	handle_hexlower(void *p)
{
	char	*hexa;
	int		number;
	int		i;

	i = 0;
	number = (int)p;
	hexa = "0123456789abcdef";
	print_hexa2(number, hexa, &i);
	return (i);
}
