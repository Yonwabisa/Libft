#include "libft.h"

void	ft_memset(void	*str, int c, size_t n)
{
	size_t j;
	unsigned char *backup;

	backup = (unsigned char*)str;
	j = 0;
	while (j < n)
	{
		*backup = (unsigned char)c;
		++backup;
		++j;
	}
	str = ft_strdup((char*)backup);
}
