/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojpark <hyojpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:02:50 by hyojpark          #+#    #+#             */
/*   Updated: 2022/05/03 17:12:15 by hyojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	format_specifier(va_list ap, const char *format, int result)
{
	if (*format == 'c')
		result += ft_putchar(va_arg(ap, int));
	// if (*format == 's')
	// 	va_arg(ap, char *);
	// if (*format == 'p')
	// 	va_arg(ap, int);
	// if (*format == 'd')
	// 	va_arg(ap, int);
	// if (*format == 'i')
	// 	va_arg(ap, int);
	// if (*format == 'u')
	// 	va_arg(ap, int);
	// if (*format == 'x')
	// 	va_arg(ap, int);
	// if (*format == 'X')
	// 	va_arg(ap, int);
	// if (*format == '%')
	// 	va_arg(ap, int);
	return (result);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		result;

	result = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			result = format_specifier(ap, format, result);
		}
		else
			result += ft_putchar(*format);
		format++;
	}
	va_end(ap);
	return (result);
}
