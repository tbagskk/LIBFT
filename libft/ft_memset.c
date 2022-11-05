void ft_memset(void *b, int c, size_t len)
{
	char *str

	str = b;
	while (len)
	{
		str = c;
		str++;
		len--;
	}
	return(b);
}