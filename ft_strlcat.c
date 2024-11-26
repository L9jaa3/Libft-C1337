#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	d_len;
	size_t	s_len;
	size_t	avaibility;

	if (!dest && dstsize == 0)
		return (ft_strlen(src));
	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	i = 0;
	if (dstsize <= d_len)
		return (dstsize + s_len);
	avaibility = dstsize - d_len - 1;
	while (src[i] && avaibility > i)
	{
		dest[d_len + i] = src[i];
		i++;
	}
	dest [d_len + i] = '\0';
	return (d_len + s_len);
}
