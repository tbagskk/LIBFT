/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 23:11:39 by gcherqui          #+#    #+#             */
/*   Updated: 2022/11/15 00:46:27 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	size_t	size;
	char	*tab;

	i = 0;
	size = ft_strlen(s);
	if (start >= size)
		len = 0;
	if (len > size - start)
		len = size - start;
	if (!s)
		return (NULL);
	tab = malloc(sizeof(char) * (len + 1));
	if (!tab)
		return (NULL);
	while (i < len)
	{
			tab[i] = s[i + start];
			i++;
	}
	tab[i] = 0;
	return (tab);
}
