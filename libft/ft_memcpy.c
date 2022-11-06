/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 20:16:55 by gcherqui          #+#    #+#             */
/*   Updated: 2022/11/06 20:20:32 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*a;

	a = (char *)dst;
	while (n--)
	{
		*(char *)a = *(char *)src;
		a++;
		src++;
	}
	return (dst);
}
