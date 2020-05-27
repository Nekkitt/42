/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffalia <ffalia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 12:04:13 by ffalia            #+#    #+#             */
/*   Updated: 2020/05/27 11:55:34 by ffalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n / 10 != 0)
			ft_putnbr_fd(n / 10) * -1, fd);
		ft_putnbr_fd((n % 10) * -1, fd);
	}
	else
		ft_putchar_fd((char)(n % 10 + 48), fd);
}
