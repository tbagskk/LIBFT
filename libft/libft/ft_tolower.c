int ft_tolowe(int c)
{
	if(c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}