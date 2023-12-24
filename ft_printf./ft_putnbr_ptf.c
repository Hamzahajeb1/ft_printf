/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ptf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haji <hel-haji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 01:39:57 by hel-haji          #+#    #+#             */
/*   Updated: 2023/12/24 19:11:27 by hel-haji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_ptf(int n, size_t *p)
{
	if (n == -2147483648)
	{
		ft_putstr_ptf("-2147483648", p);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_ptf('-', p);
		n *= -1;
	}
	if (n > 9)
		ft_putnbr_ptf(n / 10, p);
	ft_putchar_ptf(n % 10 + 48, p);
}
