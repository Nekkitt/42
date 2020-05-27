/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffalia <ffalia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 12:03:55 by ffalia            #+#    #+#             */
/*   Updated: 2020/05/27 14:45:38 by ffalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	str_size(long nb)
{
	size_t	size;

	if (nb == 0)
		size = 1;
	else
	{
		size = 0;
		while (nb > 0)
		{
			nb = nb / 10;
			size++;
		}
	}
	return (size);
}

static	char	*str_fill(long nb, size_t size, int sign)
{
	size_t	i;
	char	*str;

	if (!(str = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	i = 0;
	if (sign == 2)
		str[i] = '-';
	i = size - 1;
	str[i] = '\0';
	i--;
	if (nb >= 10)
	{
		while (nb > 0)
		{
			str[i] = nb % 10 + '0';
			nb = nb / 10;
			i--;
		}
	}
	else
		str[i] = nb + '0';
	return (str);
}

char	*ft_itoa(int n)
{
	int		sign;
	long	nb;
	size_t	size;
	
	nb = n;
	sign = 1;
	if (nb < 0)
	{
		sign = 2;
		nb = -nb;
	}
	size = str_size(nb) + sign;
	return (str_fill(nb, size, sign));
}
