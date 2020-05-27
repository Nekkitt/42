/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffalia <ffalia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/27 13:47:03 by ffalia            #+#    #+#             */
/*   Updated: 2020/05/27 16:29:47 by ffalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	first;
	size_t	last;

	first = 0;
	while (s1[first] && ft_strchr(set, s1[first]))
		first++;
	last = ft_strlen(s1);
	while (last > first && ft_strchr(set, s1[last - 1]))
		last--;
	if (last < first)
		last = 0;
	else	
		last = last - first + 1;
	str = ft_substr(s1, first, last);
	return (str);
}
