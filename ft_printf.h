/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlongo <mlongo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:21:40 by mlongo            #+#    #+#             */
/*   Updated: 2023/04/18 17:55:57 by mlongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
void	handle_c(char c);
int		handle_str(char *str);
int		handle_void(void *p);
int		handle_decimal(int n);
int		handle_unsdec10(unsigned int n);
int		handle_hexupper(void *p);
int		handle_hexlower(void *p);

#endif
