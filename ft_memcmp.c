/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbendahh <zbendahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:59:32 by zbendahh          #+#    #+#             */
/*   Updated: 2022/11/03 09:30:22 by zbendahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i] && i < n - 1)
	{
		i++;
	}
	if (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i] < 0)
		return (-1);
	else if (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i] == 0)
		return (0);
	return (1);
}
