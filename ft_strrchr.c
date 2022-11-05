/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbendahh <zbendahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:37:22 by zbendahh          #+#    #+#             */
/*   Updated: 2022/10/30 23:54:02 by zbendahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				size;
	unsigned char	x;

	x = (unsigned char)c;
	size = ft_strlen(s);
	while (size > 0)
	{
		if (s[size] == x)
			return ((char *)s + size);
		size--;
	}
	if (s[0] == x)
		return ((char *)(s + size));
	return (NULL);
}
