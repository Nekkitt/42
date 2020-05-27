/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffalia <ffalia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 21:26:20 by ffalia            #+#    #+#             */
/*   Updated: 2020/05/27 15:42:25 by ffalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	if (c == 0)
		return ((char *)s + ft_strlen(s));
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char*)s + i);
		i++;
	}
	return (NULL);
}
