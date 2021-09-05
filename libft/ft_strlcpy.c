#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dst, char *src, size_t n)
{
	unsigned int	i;

	if (!src)
		return (0);
	if (n != 0)
	{
		i = 0;
		while (src[i] && i + 1 < n)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
