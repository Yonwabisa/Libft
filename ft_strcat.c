#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int i;
	int j;
	int k;
	char *backup;

	backup = 0;
	k = 0;
	i = ((ft_strlen(dest) + ft_strlen(src)) + 1);
	j = (ft_strlen(dest) + 1);
	backup = (char*)malloc(i + 1);
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
