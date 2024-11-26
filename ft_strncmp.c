#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t ncmp)
{
	size_t	i;

	i = 0;
	while (i < ncmp && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	if (i < ncmp && (s1[i] || s2[i]))
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
