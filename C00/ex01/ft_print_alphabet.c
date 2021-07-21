#include<unistd.h>

void	ft_putchar(char c);
void	ft_print_alphabet(void);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_alphabet(void)
{
	int	alphabet;

	alphabet = 97;
	while (alphabet <= 122)
	{
		ft_putchar(alphabet);
		alphabet++;
	}
}