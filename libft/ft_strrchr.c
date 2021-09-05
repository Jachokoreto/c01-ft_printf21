#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	int		len;

	ptr = (char *)s;
	len = ft_strlen(s);
	while (len >= 0)
	{
		if (*(ptr + len) == (char)c)
			return (ptr + len);
		len--;
	}
	return (NULL);
}
