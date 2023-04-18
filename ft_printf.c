/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlongo <mlongo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:17:43 by mlongo            #+#    #+#             */
/*   Updated: 2023/04/18 19:24:08 by mlongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list arg;
	int	i;
	int len;

	len = 0;
	i = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'c')
			{
				handle_c(va_arg(arg, int));
				len++;
			}
			else if (str[i] == '%')
			{
				handle_c('%');
				len++;
			}
			else if (str[i] == 's')
				len = len + handle_str(va_arg(arg, char *));
			else if (str[i] == 'p')
				len = len + handle_void(va_arg(arg, void *));
			else if (str[i] == 'd')
				len = len + handle_decimal(va_arg(arg, int));
			else if (str[i] == 'i')
				len = len + handle_decimal(va_arg(arg, int));
			else if (str[i] == 'u')
				len = len + handle_unsdec10(va_arg(arg, unsigned int));
			else if (str[i] == 'x')
				len = len + handle_hexlower(va_arg(arg, void *));
			else if (str[i] == 'X')
				len = len + handle_hexupper(va_arg(arg, void *));
			else if (!str[i])
				break ;
		}
		else
		{
			write(1, &str[i], 1);
			len++;
		}
		i++;
	}
	va_end(arg);
	return (len);
}
