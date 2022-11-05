#include <stdio.h>

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (src[j])
	{
		dst[j + i] = src[j];
		j++;
	}
	dst[i + j] = 0;
	while(src[j])
		j++;
	return(i + j);
}