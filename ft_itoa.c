#include "libft.h"

static size_t	ft_intlen(long int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*s;
	size_t	len;
	long	nbr;

	nbr = n;
	len = ft_intlen(nbr);
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	s[len] = '\0';
	if (nbr == 0)
		s[0] = '0';
	if (nbr < 0)
	{
		s[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		s[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (s);
}
