/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:27:04 by gcherqui          #+#    #+#             */
/*   Updated: 2022/11/15 11:27:28 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	length;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	length = 0;
	while (needle[length])
		length++;
	while (i < len && *haystack)
	{
		j = 0;
		if (*haystack == needle[j])
		{
			while ((needle[j] && needle[j] == haystack[j])
				&& (i + j < len))
				j++;
			if (j == length)
				return ((char *)haystack);
		}
		haystack++;
		i++;
	}
	return (0);
}
