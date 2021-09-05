#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	long unsigned int	i;
	unsigned char		*pt;

	pt = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		pt[i] = '\0';
		i++;
	}
}
