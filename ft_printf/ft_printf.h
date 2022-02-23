/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunverdi <eunverdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 02:28:59 by eunverdi          #+#    #+#             */
/*   Updated: 2022/02/22 15:30:12 by eunverdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);
int		ft_putchar(char c);
int		ft_transformation(char str, va_list lst);
int		ft_putstr(char *s);
int		ft_putnbr(int n);
int		ft_putpointer(void *ptr);
int		ft_uputnbr(unsigned int num);
int		ft_puthex(unsigned int hex, char *charset);

#endif