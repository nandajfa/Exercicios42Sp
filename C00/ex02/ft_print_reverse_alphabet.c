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
