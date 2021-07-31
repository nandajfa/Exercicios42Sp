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

void    ft_put_two_char(char f, char s)
{
    write(1, &f, 1);
    write(1, &s, 1);
}

void    ft_putint(int nb, int limit)
{
    char    dez;
    char    uni;

    if (nb <= 9)
    {
        uni = nb + 48;
        ft_put_two_char('0', uni);
    }
    else if (nb <= limit)
    {
        dez = (nb / 10) + 48;
        uni = (nb % 10) + 48;
        ft_put_two_char(dez, uni);
    }
}

void    ft_print_comb2(void)
{
    int    fp;
    int    sp;

    fp = 0;
    while (fp <= 98)
    {
        sp = fp + 1;
        while (sp <= 99)
        {
            ft_putint(fp, 98);
            write(1, " ", 1);
            ft_putint(sp, 99);
            if (fp != 98 || sp != 99)
                write(1, ", ", 2);
            sp++;
        }
        fp++;
    }
}

int main()
{
    ft_print_comb2();
}