#include <stdio.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	char *a;

	a = (char *)dst;

	while(n--)
	{
		*(char *)a = *(char *)src;
		a++;
		src++;
	}
	return(dst);
}