/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 00:17:21 by gcherqui          #+#    #+#             */
/*   Updated: 2022/11/15 00:46:10 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*tab;
	size_t	i;
	size_t	j;

	if (s1 && s2)
	{
	size = ft_strlen(s1) + ft_strlen(s2);
	tab = malloc(sizeof(char) * size + 1);
	i = -1;
	j = 0;
		if (!tab)
			return (NULL);
		while (s1[++i])
		tab[i] = s1[i];
		while (s2[j])
		{
		tab[i] = s2[j];
		i++;
		j++;
		}
	tab[i] = 0;
		return (tab);
	}
	return (NULL);
}
