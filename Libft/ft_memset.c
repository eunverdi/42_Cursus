/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunverdi <eunverdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 13:37:50 by eunverdi          #+#    #+#             */
/*   Updated: 2022/01/08 15:16:38 by eunverdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*a;
	size_t	i;

	a = (char *)b;
	i = 0;
	while (i < len)
	{
		a[i] = c;
		i++;
	}
	return (b);
}
