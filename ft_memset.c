#include "libft.h"

void	*ft_memset(void *dest, int src, size_t sizedst)
{
	size_t			i;
	unsigned char	*d;

	d = (unsigned char *)(dest);
	i = 0;
	while (i < sizedst)
	{
		d[i] = (unsigned char)(src);
		i++;
	}
	return (dest);
}
