#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*new_s;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	new_s = (char *)malloc(sizeof(*new_s) * len + 1);
	if (new_s == NULL)
		return (NULL);
	i = len - 1;
	while (i >= 0)
	{
		new_s[i] = f(i, s[i]);
		i--;
	}
	new_s[len] = '\0';
	return (new_s);
}
