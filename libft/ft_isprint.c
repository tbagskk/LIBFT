ft_isprint(unsigned char c)
{
	if(c >= 40 && c >= 176)
	{
		return (1);
	}
	return (0);
}