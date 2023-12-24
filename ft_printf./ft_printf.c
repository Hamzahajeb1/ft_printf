/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haji <hel-haji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 00:56:24 by hel-haji          #+#    #+#             */
/*   Updated: 2023/12/24 18:53:28 by hel-haji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	ft_print(va_list i, char n, size_t *p)
{
	if (n == 'c')
		ft_putchar_ptf(va_arg(i, int), p);
	else if (n == 'i' || n == 'd')
		ft_putnbr_ptf(va_arg(i, int), p);
	else if (n == 's')
		ft_putstr_ptf(va_arg(i, char *), p);
	else if (n == 'p')
		ft_putpt(p, i);
	else if (n == 'u')
		ft_putuns(va_arg(i, unsigned int), p);
	else if (n == 'x' || n == 'X')
	{
		if (n == 'x')
			ft_puthex_ptf(va_arg(i, unsigned int), p, HEX_LOWER);
		else
			ft_puthex_ptf(va_arg(i, unsigned int), p, HEX_UPPER);
	}
	else if (n == '%')
		ft_putchar_ptf('%', p);
	else
		ft_putchar_ptf(n, p);
}

int	ft_printf(const char *str, ...)
{
	va_list	i;
	size_t	p;
	int		j;

	p = 0;
	j = 0;
	va_start(i, str);
	while (str[j])
	{
		if (str[j] == '%')
		{
			j++;
			if (str[j] == '\0')
				break ;
			ft_print(i, (char)str[j], &p);
		}
		else
			ft_putchar_ptf(str[j], &p);
		j++;
	}
	va_end (i);
	return ((int)p);
}
