int	ft_atoi(char *str)
{
	int	sign;
	int	answer;

	sign = 1;
	answer = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = sign * -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		answer = answer * 10;
		answer = answer + (*str - '0');
		answer = (int) answer;
		str++;
	}
	answer = answer * sign;
	return (answer);
}