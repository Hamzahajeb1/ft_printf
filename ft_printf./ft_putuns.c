/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haji <hel-haji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 06:54:13 by hel-haji          #+#    #+#             */
/*   Updated: 2023/12/23 07:17:46 by hel-haji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuns(unsigned int n, size_t *p)
{
	if (n > 9)
		ft_putnbr_ptf(n / 10, p);
	ft_putchar_ptf(n % 10 + 48, p);
}
