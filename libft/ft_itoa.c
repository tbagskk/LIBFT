/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcherqui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:05:11 by gcherqui          #+#    #+#             */
/*   Updated: 2022/11/15 11:10:07 by gcherqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_size(int n, int *sign)
{
	int	i;

	i = 0;
	if (n == -2147483648)
	{
		*sign = -1;
		return (11);
	}
	else if (n < 0)
	{
		*sign = -1;
		i++;
		n *= -1;
	}
	else if (n == 0)
		return (1);
	while (n >= 1)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int				size;
	int				sign;
	int				i;
	char			*tab;
	unsigned int	a;

	sign = 1;
	size = ft_size(n, &sign);
	tab = malloc(sizeof(char) * (size + 1));
	if (!tab)
		return (0);
	a = n * sign;
	if (a == 0)
		tab[0] = '0';
	i = 1;
	while (a)
	{
		tab[size - i++] = '0' + (a % 10);
		a /= 10;
	}
	if (sign == -1)
		tab[0] = '-';
	tab[size] = 0;
	return (tab);
}
