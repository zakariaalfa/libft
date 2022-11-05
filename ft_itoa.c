/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbendahh <zbendahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:23:30 by zbendahh          #+#    #+#             */
/*   Updated: 2022/11/03 09:22:52 by zbendahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size(int n)
{
	int	i;

	i = 0;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static int	sgnl(int n)
{
	int	l;

	if (n < 0)
		l = size(n) + 1;
	else if (n == 0)
		l = 1;
	else
		l = size(n);
	return (l);
}

char	*ft_itoa(int n)
{
	unsigned int	u;
	int				t;
	char			*p;

	t = sgnl(n);
	u = n;
	p = (char *)malloc(t + 1);
	if (!p)
		return (NULL);
	if (n < 0)
		p[0] = '-';
	if (n < 0)
		u = -n;
	while (u != 0)
	{
		p[t - 1] = (u % 10) + 48;
		u /= 10;
		t--;
	}
	if (n == 0)
		p[t - 1] = 0 + 48;
	p[sgnl(n)] = '\0';
	return (p);
}
