/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tesstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 00:42:15 by jefernan          #+#    #+#             */
/*   Updated: 2021/07/31 00:42:16 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int a_div;
	int b_mod;

	a_div = *a;
	b_mod = *b;
	*a = a_div / b_mod;
	*b = a_div % b_mod;
}

int	main(void)
{
	int	c;
	int	d;

	c = 7;
	d = 10;
	ft_ultimate_div_mod (&c, &d);
	printf ("%d\n", c);
	printf ("%d\n", d);
}
