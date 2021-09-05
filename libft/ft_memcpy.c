#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*pt1;
	char	*pt2;

	if (!dest && !src)
		return (NULL);
	pt1 = (char *)dest;
	pt2 = (char *)src;
	while (n--)
	{
		*pt1++ = *pt2++;
	}
	return (dest);
}
