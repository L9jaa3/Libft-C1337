#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;
	int			flag;

	flag = -1;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			flag = i;
		}
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	if (flag != -1)
		return ((char *)&s[flag]);
	return (NULL);
}
