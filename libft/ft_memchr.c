#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char tab;
	size_t i;

	i = 0;
	tab = (unsigned char *)s;
	while (i < n)
	{
		if (tab[i] == (unsigned char)c)
			return (tab + i);
		i++;
	}
	return (NULL);
}

int main()
{
	
}