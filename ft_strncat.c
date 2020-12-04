#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int j;
	int k;
	char *backup;

	backup = 0;
	k = 0;
	j = (ft_strlen(dest) + 1);
	backup = (char*)malloc(ft_strlen(dest) + n);
	ft_strcpy(backup, dest);
	while (n > 0)
	{
		backup[j] = src[k];
		++k;
		++j;
		n--;
	}
	return (backup);
}
