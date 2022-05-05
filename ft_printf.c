/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojpark <hyojpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:02:50 by hyojpark          #+#    #+#             */
/*   Updated: 2022/05/05 14:43:37 by hyojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_specifier(va_list ap, const char *format, int print_len)
{
	if (*format == 'c')
		print_len += ft_print_char(va_arg(ap, int));
	else if (*format == 's')
		print_len += ft_print_str(va_arg(ap, char *));
	else if (*format == 'p')
		print_len += ft_print_pointer(va_arg(ap, void *));
	else if (*format == 'd' || *format == 'i')
		print_len += ft_print_num(va_arg(ap, int));
	else if (*format == 'u')
		print_len += ft_print_unum(va_arg(ap, unsigned int));
	else if (*format == 'x' || *format == 'X')
		print_len += ft_print_hex(va_arg(ap, unsigned int), *format);		
	else if (*format == '%')
		print_len += ft_print_char('%');
	return (print_len);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		print_len;

	print_len = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			print_len = format_specifier(ap, format, print_len);
		}
		else
			print_len += ft_print_char(*format);
		format++;
	}
	va_end(ap);
	return (print_len);
}
