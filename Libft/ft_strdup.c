/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffalia <ffalia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/27 17:49:31 by ffalia            #+#    #+#             */
/*   Updated: 2020/05/27 17:49:33 by ffalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	i;
	size_t	len;

	len = ft_strlen(s1);
	if (!(s2 = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (len > i)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = 0;
	return (s2);
}
