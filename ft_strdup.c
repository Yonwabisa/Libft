#include "libft.h"

char	*ft_strdup(const char *src)
{
	int i;
	char *dest;

	i = 0;
	dest = 0;
	while (src[i])
	{
		++i;
	}
	dest = (char*)malloc(i);
	while (i >= 0)
	{
		dest[i] = src[i];
		--i;
	}
	return (dest);
}
