/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_printf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlongo <mlongo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:57:28 by mlongo            #+#    #+#             */
/*   Updated: 2023/04/18 17:57:41 by mlongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "stdio.h"

int	main()
{
	char *p;
	int	i1 = 0;
	int i2 = 0;
	p = "sono una stringa";
	i1 = ft_printf("il char e': %c e l'altro e' una stringa: %s mentre il suo indirizzo %p numero decimale %d, integer %i, unsigned %u, hexlower %x, hexupper %X\n", 'c', p, p, 123, 2000, -214748364, 45, 45);
	i2 = printf("il char e': %c e l'altro e' una stringa: %s mentre il suo indirizzo %p numero decimale %d, integer %i, unsigned %u, hexlower %x, hexupper %X\n", 'c', p, p, 123, 2000, -214748364, 45, 45);
	printf("il tuo return %d, il vero return %d", i1, i2);
	return (0);
}
