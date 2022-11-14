/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 20:04:17 by gcherqui          #+#    #+#             */
/*   Updated: 2022/11/13 21:00:05 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s, const void *c, size_t n)
{	
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)s;
	b = (unsigned char *)c;
	i = 0;
	while (i < n && a[i] == b[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	return (a[i] - b[i]);
}
