#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int i;
	int diff;

	i = 0;
	diff = 0;
	while (s1[i] && s2[i])
	{
		diff = (s1[i] - s2[i]);
		if (diff != 0)
		{
			return (diff);
		}
		++i;
	}
	return (diff);
}
