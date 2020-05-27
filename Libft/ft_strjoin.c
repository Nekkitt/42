/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffalia <ffalia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 12:02:30 by ffalia            #+#    #+#             */
/*   Updated: 2020/05/27 13:54:18 by ffalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	n;

	str = (char*)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	i = 0;
	n = 0;
	while (s1[i] != '\0')
	{
		str[n++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		str[n++] = s2[i];
		i++;
	}
	str[n] = 0;
	return (str);
}
