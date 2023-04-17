/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlongo <mlongo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:17:43 by mlongo            #+#    #+#             */
/*   Updated: 2023/04/17 19:25:39 by mlongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
	va_list arg;
	int	i;
	int countarg;

	countarg = 0;
	i = 0;
	while (str[i])
	{
		if (str[i++] == '%')
		{
			if (str[i] == 's' || str[i] == 'p' || str[i] == 'c' || str[i] == 'd'
			 || str[i] == 'i' || str[i] == 'u' || str[i] == 'x' || str[i] == 'X')
			 countarg++;
		}
		if (str[i])
			i++;
	}

	va_start(arg, countarg);

	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'c')
				handle_c(va_arg(arg, char));
			else if (str[i] == 's')
				handle_str(va_arg(arg, char *));
			else if (str[i] == 'p')
				handle_void(va_arg(arg, void *));
			else if (str[i] == 'd')
				handle_decimal(va_arg(arg, int));
			else if (str[i] == 'i')
				handle_int10(va_arg(arg, int));
			else if (str[i] == 'u')
				handle_unsdec10(va_arg(arg, unsigned int));
			else if (str[i] == 'x')
				handle_hex_lowercase(va_arg(arg, char *));
			else if (str[i] == 'X')
				handle_hex_uppercase(va_arg(arg, char *));
			else if (!str[i])
				break ;
		}
		else
			write(1, &str[i], 1);
		i++;
	}
	va_end(arg);
}
