#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	b;
	size_t			i;

	str = (unsigned char *)s;
	b = (unsigned char)c;
	i = 0;
	while (n > 0)
	{
		str[i] = b;
		i++;
		n--;
	}
	return ((void *)str);
}
