/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haji <hel-haji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 06:28:51 by hel-haji          #+#    #+#             */
/*   Updated: 2023/12/23 07:16:31 by hel-haji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define HEX_LOWER "0123456789abcdef"
# define HEX_UPPER "0123456789ABCDEF"
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdint.h>
# include <unistd.h>
# include <limits.h>
# include <stddef.h>

int		ft_printf(const char *str, ...);
void	ft_putchar_ptf(int c, size_t *p);
void	ft_puthex_ptf(unsigned long n, size_t *p, char *j);
void	ft_putnbr_ptf(int n, size_t *p);
void	ft_putstr_ptf(char *s, size_t *p);
void	ft_putuns(unsigned int n, size_t *p);
void	ft_putpt(size_t *p, va_list arg);
#endif
