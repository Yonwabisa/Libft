#include <string.h>

void	*ft_memalloc(size_t size)
{
	unsigned char	ptr[size];
	void		*out;

	ptr[0] = 0;
	out = (void*)ptr;
	return (out);
}
