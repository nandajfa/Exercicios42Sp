#include <stdio.h>
int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[j] != '\0')
	{
		if ((str[j] >= 'A') && (str[j] <= 'Z'))
			i++;
		j++;
	}
	if (j == i)
		return (1);
	else
		return (0);
}

int main()
{
	char b;

	b = ft_str_is_uppercase("AMANHA");
	printf("%d\n", b);
	return(0);
}
