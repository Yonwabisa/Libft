#include "libft.h"

char	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return ((char)(c -= 32));
	}
	else
	{
		return ((char)c);
	}
}
