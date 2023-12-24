/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_ptf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haji <hel-haji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 01:53:49 by hel-haji          #+#    #+#             */
/*   Updated: 2023/12/24 20:11:34 by hel-haji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_ptf(char *s, size_t *p)
{
	if (!s)
		s = "(null)";
	while (*s)
	{
		ft_putchar_ptf(*s, p);
		s++;
	}
}
