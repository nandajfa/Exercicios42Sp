#include<unistd.h>

void	ft_is_negative(int n);
void	ft_putchar(char n);

int	main(void)
{
	ft_is_negative(11);
	return (0);
}

void	ft_putchar(char a)
{
	write (1, &a, 1);
}

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar(78);
	}
	else if (n >= 0)
	{
		ft_putchar(80);
	}
}
