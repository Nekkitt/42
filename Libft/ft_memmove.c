/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffalia <ffalia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 21:26:15 by ffalia            #+#    #+#             */
/*   Updated: 2020/05/27 15:32:16 by ffalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*s1;
	const unsigned char	*s2;

	if (!src && !dest)
		return (NULL);
	i = 1;
	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	if (s2 < s1)
		while (i <= len)
		{
			s1[len - i] = s2[len - i];
			i++;
		}
	else
	{
		i = 0;
		while (i < len)
		{
			s1[i] = s2[i];
			i++;
		}
	}
	return (dest);
}
