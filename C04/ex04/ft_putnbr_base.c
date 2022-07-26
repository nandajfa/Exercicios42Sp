#include<unistd.h>
int		check_base(char *base);
void	ft_print(int nbr, char *base, int base_size);
int		ft_strlen(char *str);
int		check_repetition(char *base, int limit);

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_size;

	if (check_base(base) == 1)
		return ;
	base_size = ft_strlen(base);
	ft_print(nbr, base, base_size);
}

void	ft_print(int nbr, char *base, int base_size)
{
	char	c;
	int		index;

	if (nbr == -2147483648)
	{
		ft_print((nbr / base_size), base, base_size);
		index = nbr % base_size;
		c = base[index];
		write(1, &c, 1);
		return ;
	}
	if (0 > nbr)
	{
		write(1, "-", 1);
		nbr = nbr * (-1);
	}
	if (nbr > base_size - 1)
		ft_print((nbr / base_size), base, base_size);
	index = nbr % base_size;
	c = base[index];
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (*str++)
		size++;
	return (size);
}

int	check_base(char *base)
{
	int		size;
	char	*p;

	p = base;
	size = 0;
	if (ft_strlen(base) <= 1 || base == 0)
		return (1);
	while (*p)
	{
		if (*base == '+' || *base == '-' || (*base < 31 && *base != 0))
			return (1);
		if (check_repetition(base, (p - base) == 1))
			return (1);
		p++;
	}
	return (0);
}

int	check_repetition(char *base, int limit)
{
	int	j;
	int	k;

	j = 0;
	while (limit > j)
	{
		k = j + 1;
		while (limit > k)
		{
			if (*(base + j) == *(base + k))
				return (1);
			k++;
		}
		j++;
	}
	return (0);
}