/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunverdi <eunverdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 02:38:32 by eunverdi          #+#    #+#             */
/*   Updated: 2022/02/23 18:10:12 by eunverdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int hex, char *charset)
{
	int		i;
	int		len;
	char	str[16];

	len = 0;
	i = 0;
	if (hex == 0)
		return (ft_putstr("0"));
	while (i <= 16)
		str[i++] = 0;
	i = 0;
	while (hex)
	{
		str[i] = charset[hex % 16];
		hex /= 16;
		i++;
	}
	while (i--)
		len += write(1, &str[i], 1);
	return (len);
}

int	ft_transformation(char str, va_list lst)
{
	if (str == 'c')
		return (ft_putchar(va_arg(lst, int)));
	if (str == 's')
		return (ft_putstr(va_arg(lst, char *)));
	if (str == 'd' || str == 'i')
		return (ft_putnbr(va_arg(lst, int)));
	if (str == 'p')
	{
		ft_putstr("0x");
		return (ft_putpointer(va_arg(lst, void *)) + 2);
	}
	if (str == 'u')
		return (ft_uputnbr(va_arg(lst, unsigned int)));
	if (str == '%')
		return (ft_putchar('%'));
	if (str == 'x')
		return (ft_puthex(va_arg(lst, unsigned int), "0123456789abcdef"));
	if (str == 'X')
		return (ft_puthex(va_arg(lst, unsigned int), "0123456789ABCDEF"));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list	lst;
	int		j;
	int		i;

	va_start(lst, s);
	j = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			j += ft_transformation(s[i + 1], lst);
			i++;
		}
		else
			j += write(1, &s[i], 1);
		i++;
	}
	va_end(lst);
	return (j);
}
