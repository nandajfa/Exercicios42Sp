#include<unistd.h>

void	ft_print_numbers(void);
void	ft_putchar(char n);

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

void	ft_print_numbers(void)
{
	int	num;

	num = '0';
	while (num <= '9')
	{
		ft_putchar(num);
		num++;
	}
}
