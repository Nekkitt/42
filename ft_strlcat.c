/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffalia <ffalia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 21:26:28 by ffalia            #+#    #+#             */
/*   Updated: 2020/05/26 13:42:50 by ffalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dstlen;

	j = ft_strlen(dst);
	dstlen = ft_strlen(dst);
	i = 0;
	if (dstlen < size - 1 && size > 0)
	{
		while (src[i] && dstlen + i < size - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	if (dstlen >= size)
		dstlen = size;
	return (dstlen + ft_strlen(src));
}
