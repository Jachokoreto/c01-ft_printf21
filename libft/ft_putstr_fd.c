#include "libft.h"
#include <unistd.h>

int	ft_putstr_fd(char *s, int fd)
{
	int	len;

	if (!s)
		return (0);
	len = 0;
	while (*(s + len))
		len++;
	write(fd, s, len);
	return (len);
}
