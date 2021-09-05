#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	long unsigned int	i;
	unsigned char		*pt;

	pt = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		pt[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
