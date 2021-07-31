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

#include<unistd.h>

void	ft_putchar(char a);
void	ft_print_reverse_alphabet(void);

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_reverse_alphabet(void)
{
	int	reverse;

	reverse = 122;
	while (reverse >= 97)
	{
		ft_putchar(reverse);
		reverse--;
	}
}
