/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbendahh <zbendahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:36:41 by zbendahh          #+#    #+#             */
/*   Updated: 2022/11/03 22:05:49 by zbendahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	int			i;
	char		x;
	const char	*p;

	i = 0;
	x = (char)c;
	p = s;
	while (s[i])
	{
		if (s[i] == x)
			return ((char *)p);
		i++;
		p++;
	}
	if (c == 0)
		return ((char *)p);
	return (NULL);
}
