#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *input;
	unsigned char *out;
	size_t i;

	i = 0;
	out = (unsigned char*)dest;
	input = (unsigned char*)src;
	while (i < n)
		*out++ = input[i++];
	return (dest);
}
