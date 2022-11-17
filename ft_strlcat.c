/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 20:29:51 by gcherqui          #+#    #+#             */
/*   Updated: 2022/11/06 20:30:41 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	index;

	index = -1;
	while (++index < size && *dst)
		dst++;
	if (index == size)
		return (index + ft_strlen(src));
	while (++index < size && *src)
		*dst++ = *src++;
	*dst = '\0';
	return (index - 1 + ft_strlen(src));
}
