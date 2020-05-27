/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffalia <ffalia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 21:23:52 by ffalia            #+#    #+#             */
/*   Updated: 2020/05/26 12:18:30 by ffalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		check_num(unsigned long long num, int sign)
{
	if (num == 2147483648 && sign == -1)
		return ((int)num * sign);
	if (num > 2147483647)
	{
		if (sign == 1)
			return (-1);
		else
			return (0);
	}
	return ((int)num * sign);
}

int		ft_atoi(const char *str)
{
	unsigned long long		ch;
	int						i;
	int						sign;

	ch = 0;
	i = 0;
	while ((str[i]) && ((((str[i] >= 9) && (str[i] <= 13)) || (str[i] == 32))))
		i++;
	sign = 1;
	if (str[i] == '-')
		sign = -1;
	if ((str[i] == '+') || (str[i] == '-'))
		i++;
	while ((str[i]) && (str[i] >= '0') && (str[i] <= '9'))
	{
		ch = ch * 10 + (str[i] - '0');
		i++;
	}
	return (check_num(ch, sign));
}
