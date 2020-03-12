#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int out;
	int neg;

	i = 0;
	out = 0;
	neg = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = -1;
		++i;
	}
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
			++i;
		out = ((out * 10) + str[i] - '0');
		++i;
	}
	return (out *neg);
}
