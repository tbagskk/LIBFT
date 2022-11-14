/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 20:29:10 by gcherqui          #+#    #+#             */
/*   Updated: 2022/11/14 19:07:22 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*tab;
	int		i;

	i = 0;
	len = ft_strlen(s1);
	tab = malloc((len + 1) * sizeof(char));
	if (!tab)
		return (NULL);
	while (*s1)
		*tab++ = *s1++;
	*tab = 0;
	return (tab - len);
}