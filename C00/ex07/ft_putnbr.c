#include <unistd.h>

void    ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        write(1, "-", 1);
        write(1, "2", 1);
        nb = 147483648;
    }
    if (nb < 0)
    {
        write(1, "-", 1);
        nb = -1 * nb;
    }
    if (nb <= 9)
    {
        write(1, nb + 48, 1);
        return ;
    }
    else
    {
        ft_putnbr(nb / 10);
    }
    ft_putnbr(nb % 10);
}