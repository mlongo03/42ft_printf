/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_printf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlongo <mlongo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:57:28 by mlongo            #+#    #+#             */
/*   Updated: 2023/04/19 12:50:24 by mlongo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "stdio.h"

int	main()
{
	int	*p;
	int	i1 = 0;
	int i2 = 0;
	p = &i1;
	// i1 = ft_printf("il char e': %c e l'altro e' una stringa: %s mentre il suo indirizzo %p numero decimale %d, integer %i, unsigned %u, hexlower %x, hexupper %X %%\n", 'c', p, p, 123, 2000, -214748364, 45, 45);
	// i2 = printf("il char e': %c e l'altro e' una stringa: %s mentre il suo indirizzo %p numero decimale %d, integer %i, unsigned %u, hexlower %x, hexupper %X %%\n", 'c', p, p, 123, 2000, -214748364, 45, 45);
	i2 = printf("%x\n", -1);
	i1 = ft_printf("%x\n", -1);
	printf("il tuo return %d, il vero return %d\n", i1, i2);
	// printf(" %p \n", 1000000000000000);
	// ft_printf(" %p ", 1000000000000000);
	return (0);
}
