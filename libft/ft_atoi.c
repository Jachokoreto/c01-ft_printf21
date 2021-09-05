#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	number;

	sign = 1;
	number = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t'
		|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9' && *str)
	{
		number = 10 * number + (*str - '0');
		str++;
	}
	return (number * sign);
}
