#include "libft.h"

static int	handle_overflow(int sign, unsigned long long n, int count)
{
	if ((n > LLONG_MAX || count > 19) && sign == -1)
		return (0);
	if ((n > LLONG_MAX || count > 19) && sign == 1)
		return (-1);
	return (n * sign);
}

int	ft_atoi(const char *str)
{
	int					i;
	int					len;
	int					sign;
	unsigned long long	n;

	i = 0;
	len = 0;
	sign = 1;
	n = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] == '0')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = (n * 10) + (str[i++] - '0');
		len++;
	}
	return (handle_overflow(sign, n, len));
}
