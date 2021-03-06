#include "libft.h"

char	*ft_itoa_hex(int n)
{
	char			hex[18];
	char			buffer[14];
	int				i;
	unsigned int	uint_n;

	ft_strlcpy(hex, "0123456789abcdef", 17);
	uint_n = n;
	i = 0;
	while (uint_n >= 16)
	{
		buffer[i++] = hex[(uint_n % 16)];
		uint_n /= 16;
	}
	buffer[i++] = hex[(uint_n % 16)];
	buffer[i] = '\0';
	ft_reverse(buffer, 0, i - 1);
	return (ft_strdup(buffer));
}
