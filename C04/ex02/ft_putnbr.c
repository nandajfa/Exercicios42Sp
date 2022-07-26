#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		correction;
	char	c;

	correction = 0;
	if (nb < 0)
	{
		write (1, "-", 1);
		if (nb == -2147483648)
		{
			nb = nb + 1;
			nb = nb * (-1);
			correction = 1;
		}
		else
			nb = nb * (-1);
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	nb = (nb % 10) + correction;
	c = nb + '0';
	write (1, &c, 1);
}
