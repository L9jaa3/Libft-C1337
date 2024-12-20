#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;

	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	i = 0;
	while ((i <= len - needle_len) && haystack[i] != '\0')
	{
		if (len < needle_len)
			return (NULL);
		if (ft_strncmp(&haystack[i], needle, needle_len) == 0)
		{
			return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
