#include <unistd.h>

void ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write (1, str, 1);
		str++;
	}
}

int main()
{
	char string[] = "Hello";
	ft_putstr(&string[0]);

	return (0);
}
