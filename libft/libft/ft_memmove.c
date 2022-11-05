#include <stdio.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	char *a;
	char *b;
	size_t i;

	a = (char *)dst;
	b = (char *)src;
	i = 0;

	if (a > b)
	{
		while (len--)
			a[len] = b[len];
	}
	else	
	{
		while (i < len)
		{
			a[i] = b[i];
			i++;
		}
	}
	return(dst);
}
