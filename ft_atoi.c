/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbendahh <zbendahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:32:19 by zbendahh          #+#    #+#             */
/*   Updated: 2022/11/03 21:03:26 by zbendahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	space(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
	i++;
	return (i);
}

static int	sign(int p)
{
	if (p == 1)
		return (-1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	unsigned long int	r;
	int					p;
	int					i;

	r = 0;
	p = 1;
	i = space(str);
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			p = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		r = (r * 10 + str[i] - 48);
		if (i > 19 || r >= 9223372036854775808ULL)
			return (sign(p));
		i++;
	}
	return (r * p);
}
