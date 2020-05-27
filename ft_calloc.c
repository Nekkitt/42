/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffalia <ffalia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 21:23:59 by ffalia            #+#    #+#             */
/*   Updated: 2020/05/26 13:15:46 by ffalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	char	*mem;

	if (num == 0 || size == 0)
	{
		num = 1;
		size = 1;
	}
	if (!(mem = (char *)malloc(size * num)))
		return (NULL);
	ft_bzero(mem, (size * num));
	return mem;
}
