#include "libft.h"

size_t	ft_strlen(const char *senc)
{
	int	i;

	i = 0;
	while (senc[i])
	{
		i++;
	}
	return (i);
}
