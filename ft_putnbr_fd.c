/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbendahh <zbendahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:55:47 by zbendahh          #+#    #+#             */
/*   Updated: 2022/10/22 18:22:55 by zbendahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	u;

	u = n;
	if (u < 0)
	{
		u = (-1) * u;
		ft_putchar_fd('-', fd);
	}
	if (u >= 10)
		ft_putnbr_fd((u / 10), fd);
	ft_putchar_fd(((u % 10) + '0'), fd);
}
