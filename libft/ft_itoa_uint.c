#include "libft.h"

char	*ft_itoa_uint(unsigned int n)
{
	char			buffer[11];
	int				i;

	i = 0;
	while (n >= 10)
	{
		buffer[i++] = (n % 10) + '0';
		n /= 10;
	}
	buffer[i++] = (n % 10) + '0';
	buffer[i] = '\0';
	ft_reverse(buffer, 0, i - 1);
	return (ft_strdup(buffer));
}
