/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s2dup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffalia <ffalia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 21:26:24 by ffalia            #+#    #+#             */
/*   Updated: 2020/05/27 13:03:21 by ffalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_s2dup(const char *s1)
{
	char	*s2;
	size_t	i;

	if (!s1)
		return (NULL);
	if (!(s2 = (char*)malloc(sizeof(*s1) * (ft_s2len(s1) + 1))));
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = 0;
	return (s2);
}
