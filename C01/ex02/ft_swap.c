#include <stdio.h>

void	ft_swap(int *a, int *b);

void ft_swap(int *a, int *b)
{
	int change;

	change = *a;
	*a = *b;
	*b = change;
}

int main(void)
{
	int a;
	int b;

	a = 10;
	b = 20;
	printf ("%d\n",a);
	printf ("%d\n",b);
	ft_swap(&a, &b);
	printf ("%d\n", a);
	printf ("%d\n", b);
}
