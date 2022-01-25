/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunverdi <eunverdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 13:27:04 by eunverdi          #+#    #+#             */
/*   Updated: 2022/01/13 17:09:39 by eunverdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*a;
	char	*b;
	size_t	i;

	if (!n || src == dst)
		return (dst);
	i = 0;
	a = (char *)dst;
	b = (char *)src;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (dst);
}
