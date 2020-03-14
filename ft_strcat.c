#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int j;
	int k;
	char *backup;

	backup = 0;
	k = 0;
	j = (ft_strlen(dest) + 1);
	backup = (char*)malloc((ft_strlen(dest) + ft_strlen(src)) + 1);
	ft_strcpy(backup, dest);
	while (src[k])
	{
		backup[j] = src[k];
		++k;
		++j;
	}
	backup[j] = src[k];
	return (backup);
}
