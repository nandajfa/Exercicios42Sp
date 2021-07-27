#include <unistd.h>

void	ft_print_comb(void);
void	ft_putchar(char a, char b, char c);

int	main(void)
{
	ft_print_comb();
	return (0);
}

void	ft_putchar(char e, char f, char g)
{
	write(1, &e, 1);
	write(1, &f, 1);
	write(1, &g, 1);
	if (e != '7' || f != '8' || g != '9')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	u = '0';
	while (u <= '7')
	{
		d = u + 1;
		while (d <= '8')
		{
			c = d + 1;
			while (c <= '9')
			{
				ft_putchar(u, d, c);
				c++;
			}
			d++;
		}
		u++;
	}
}
