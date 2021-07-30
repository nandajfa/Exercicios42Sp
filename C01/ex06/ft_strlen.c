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
