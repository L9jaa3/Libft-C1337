#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ptr;

	if (!s || !f)
		return (NULL);
	ptr = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		ptr[i] = (*f)(i, s[i]);
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
