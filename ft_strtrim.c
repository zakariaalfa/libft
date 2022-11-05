/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbendahh <zbendahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:22:23 by zbendahh          #+#    #+#             */
/*   Updated: 2022/11/03 08:10:16 by zbendahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char const c, char const *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*p;
	int		size;
	int		t;
	int		d;

	i = 0;
	t = 0;
	size = ft_strlen(s1) - 1;
	while (check(s1[i], set) == 1)
		i++;
	while (check(s1[size], set) == 1 && size != 0)
		size--;
	if (size == 0)
		i = 1;
	d = size - i + 1;
	p = (char *)malloc(d + 1);
	if (!p)
		return (NULL);
	while (i <= size)
		p[t++] = s1[i++];
	p[t] = '\0';
	return (p);
}
