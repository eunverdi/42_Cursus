/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunverdi <eunverdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 13:15:47 by eunverdi          #+#    #+#             */
/*   Updated: 2022/01/15 23:59:31 by eunverdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_setkontrol(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i++] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	if (s1 == 0 || set == 0)
		return (NULL);
	j = ft_strlen(s1);
	while (s1[i] && ft_setkontrol(s1[i], set))
		i++;
	while (j > i && ft_setkontrol(s1[j - 1], set))
		j--;
	str = (char *)malloc(sizeof(char) * (j - i + 1));
	if (!str)
		return (NULL);
	while (i < j)
	{
		str[k++] = s1[i++];
	}
	str[k] = '\0';
	return (str);
}
