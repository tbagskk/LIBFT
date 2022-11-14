/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:52:41 by gcherqui          #+#    #+#             */
/*   Updated: 2022/11/14 18:58:49 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	int *tab;

	tab = malloc(size * count);
	if (!tab)
		return (NULL);
	ft_bzero(tab, size * count);
	return (tab);
}
