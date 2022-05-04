/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojpark <hyojpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:02:50 by hyojpark          #+#    #+#             */
/*   Updated: 2022/05/04 20:45:42 by hyojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	format_specifier(va_list ap, const char *format, int print_len)
{
	if (*format == 'c')
		print_len += ft_putchar(va_arg(ap, int));
	else if (*format == 's')
		print_len += ft_print_str(va_arg(ap, char *));
	// if (*format == 'p')
	// 	va_arg(ap, void *);
	if (*format == 'd')
		print_len += ft_print_num(va_arg(ap, int));
	if (*format == 'i')
		print_len += ft_print_num(va_arg(ap, int));
	if (*format == 'u')
		print_len += ft_print_unum(va_arg(ap, unsigned int));
	// if (*format == 'x')
	// 	va_arg(ap, unsigned int);
	// if (*format == 'X')
	// 	va_arg(ap, unsigned int);
	if (*format == '%')
		print_len += ft_putchar('%');
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
			print_len += ft_putchar(*format);
		format++;
	}
	va_end(ap);
	return (print_len);
}
