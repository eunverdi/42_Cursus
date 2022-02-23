/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunverdi <eunverdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 02:39:52 by eunverdi          #+#    #+#             */
/*   Updated: 2022/02/22 15:36:56 by eunverdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (!s)
		return (ft_putstr("(null)"));
	while (s[i] && s)
	{
		len += ft_putchar(s[i]);
		i++;
	}
	return (len);
}

int	ft_putnbr(int n)
{
	int	nbr;

	nbr = 0;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
		nbr++;
	}
	if (n >= 10)
		nbr += ft_putnbr(n / 10);
	nbr += ft_putchar((n % 10) + '0');
	return (nbr);
}

int	ft_putpointer(void *ptr)
{
	unsigned long	ret;
	int				res;
	char			*set;

	ret = (unsigned long)ptr;
	res = 0;
	if (ret > 15)
		res += ft_putpointer((void *)(ret / 16));
	set = "0123456789abcdef";
	res += ft_putchar(set[ret % 16]);
	return (res);
}

int	ft_uputnbr(unsigned int num)
{
	int		res;
	char	*set;

	res = 0;
	if (num > 9)
		res += ft_uputnbr(num / 10);
	set = "0123456789";
	res += ft_putchar(set[num % 10]);
	return (res);
}
