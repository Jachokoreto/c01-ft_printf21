#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/* RETURN VALUE
       The  value  returned is that of the converted letter, or c
       if the conversion was not possible. */
