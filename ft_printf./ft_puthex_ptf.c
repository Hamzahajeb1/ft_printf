/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_ptf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haji <hel-haji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 01:46:27 by hel-haji          #+#    #+#             */
/*   Updated: 2023/12/23 00:50:10 by hel-haji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_ptf(unsigned long n, size_t *p, char *j)
{
	if (n > 15)
	{
		ft_puthex_ptf(n / 16, p, j);
		ft_putchar_ptf(j[n % 16], p);
	}
	else
		ft_putchar_ptf(j[n % 16], p);
}
