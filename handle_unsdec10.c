/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_unsdec10.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlongo <mlongo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:26:58 by mlongo            #+#    #+#             */
/*   Updated: 2023/04/18 17:51:24 by mlongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_unsdec10(unsigned int n, char *dec, int *i)
{
	if (n < 0)
	{
		handle_c('-');
		n = -n;
		*i = *i + 1;
	}
	if (n < 10)
	{
		handle_c(dec[n]);
		*i = *i + 1;
	}
	else
	{
		handle_decimal(n / 10);
		handle_decimal(n % 10);
	}
}

int	handle_unsdec10(unsigned int n)
{
	char	*dec;
	int		i;

	i = 0;
	dec = "0123456789";
	print_unsdec10(n, dec, &i);
	return (i);
}
