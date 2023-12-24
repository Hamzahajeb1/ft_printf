/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpt.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haji <hel-haji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 06:59:21 by hel-haji          #+#    #+#             */
/*   Updated: 2023/12/23 07:17:20 by hel-haji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putpt(size_t *p, va_list arg)
{
	void	*pt;

	pt = va_arg(arg, void *);
	ft_putstr_ptf("0x", p);
	ft_puthex_ptf((unsigned long)pt, p, HEX_LOWER);
}
