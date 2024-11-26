#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	slen;
	char	*str;
	size_t	i;

	slen = ft_strlen(s1);
	str = (char *)(malloc((slen + 1) * sizeof(char)));
	if (!str)
		return (NULL);
	i = 0;
	while (i < slen)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
