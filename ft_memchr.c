/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbendahh <zbendahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:35:43 by zbendahh          #+#    #+#             */
/*   Updated: 2022/11/04 15:25:23 by zbendahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		x;
	const char			*p;

	if (!s && !n)
		return (NULL);
	i = 0;
	x = (char)c;
	p = s;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == x)
			return ((unsigned char *)p);
		i++;
		p++;
	}
	return (NULL);
}