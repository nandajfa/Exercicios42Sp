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


#include <unistd.h>

int	t_strlen(char *str)
{
	int	a;

	a = 0;
	while (*str != '\0')
	{
		str++;
		a++;
	}
	return (a);
}
int main()
{
	int b;

	b = ft_strlen("cabeçalho");
	printf("O tamanho da string é: %d\n", b);
	return(0);
}
