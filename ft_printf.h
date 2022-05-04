/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojpark <hyojpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:05:35 by hyojpark          #+#    #+#             */
/*   Updated: 2022/05/04 20:15:22 by hyojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_printf(const char *format, ...);
int	format_specifier(va_list ap, const char *format, int print_len);
int	ft_print_str(char *str);
int	ft_print_num(int num);

#endif