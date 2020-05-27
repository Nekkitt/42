/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffalia <ffalia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 12:02:17 by ffalia            #+#    #+#             */
/*   Updated: 2020/05/27 16:31:21 by ffalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	**mem_free(char **str, int i)
{
	while (i-- > 0)
		free(str[i]);
	free(str);
	return (NULL);
}

static	size_t	ft_len(char const *str, char c, int first)
{
	size_t	i;

	i = 0;
	while (str[first] != c && str[first] != '\0' )
	{
		first++;
		i++;
	}
	return (i);
}

static	char	**str_fill(char **str, const char *s, char c)
{
	size_t			len;
	unsigned int	i;
	unsigned int	j;
	
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != '\0' && s[i] != '\0')
		{
			len = ft_len(s, c, i);
			str[j] = ft_substr(s, i, len);
			if (str[j] == NULL)
				return (mem_free(str, j));
			i = i + len;
			j++;
		}
		else
			i++;
	}
	str[j] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0'  && s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
		{
			len++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	if (!(str = (char **)malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	return (str_fill(str, s, c));
}