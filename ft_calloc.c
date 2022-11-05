/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbendahh <zbendahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:33:47 by zbendahh          #+#    #+#             */
/*   Updated: 2022/11/03 21:03:55 by zbendahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t	count,	size_t size)
{
	char	*p;

	if ((int)size >= 0 && (int)count >= 0)
	{
		p = malloc(count * size);
		if (!p)
			return (NULL);
		ft_bzero(p, count * size);
		return (p);
	}
	return (NULL);
}
