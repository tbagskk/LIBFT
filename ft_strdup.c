/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 20:29:10 by gcherqui          #+#    #+#             */
/*   Updated: 2022/11/15 00:45:39 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*tab;

	len = ft_strlen(s1);
	tab = malloc((len + 1) * sizeof(char));
	if (!tab)
		return (NULL);
	while (*s1)
		*tab++ = *s1++;
	*tab = 0;
	return (tab - len);
}
