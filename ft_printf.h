/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 13:50:36 by callwood          #+#    #+#             */
/*   Updated: 2026/10/28 13:50:39 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <unistd.h>

int	ft_printchar(va_list args);
int	ft_printstr(va_list args);
int	ft_printchar(va_list args);
int	ft_printnbr(va_list args);
int	ft_printptr(va_list args);
int	ft_printunsigned(va_list args);
int	ft_printhex(va_list args, int uppercase);
int	ft_printf(const char *format, ...);

#endif