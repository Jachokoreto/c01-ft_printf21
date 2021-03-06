#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*p_dest;
	char	*p_src;

	if (!dest && !src)
		return (NULL);
	p_dest = (char *)dest;
	p_src = (char *)src;
	if (p_src >= p_dest)
		while (n--)
			*p_dest++ = *p_src++;
	else
		while (n--)
			*(p_dest + n) = *(p_src + n);
	return (dest);
}
