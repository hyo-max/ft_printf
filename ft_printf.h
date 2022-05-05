/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojpark <hyojpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:05:35 by hyojpark          #+#    #+#             */
/*   Updated: 2022/05/05 17:38:58 by hyojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int	ft_print_hex(unsigned int num, const char format);
int	ft_print_pointer(unsigned long long a);
char *ft_uitoa(unsigned int num);
int	ft_get_len(unsigned int num);
int	ft_print_unum(unsigned int num);
int	ft_print_num(int num);
int	ft_print_str(char *str);
int	ft_print_char(char c);
int	format_specifier(va_list ap, const char *format, int print_len);
int	ft_printf(const char *format, ...);

#endif