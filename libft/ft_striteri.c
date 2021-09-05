#include <stdlib.h>
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	if (!s || !f)
		return ;
	i = ft_strlen(s) - 1;
	while (i >= 0)
	{
		f(i, s);
		i--;
	}
}
