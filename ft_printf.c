/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojpark <hyojpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:02:50 by hyojpark          #+#    #+#             */
/*   Updated: 2022/05/03 15:26:18 by hyojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
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
			// if (*format == 'c')
			// 	va_arg(ap, char);
			// if (*format == 's')
			// 	va_arg(ap, char *);
			// if (*format == 'd')
			// 	va_arg(ap, int);
		}
		else
			result += ft_putchar(*format);
		format++;
	}
	va_end(ap);
	return (result);
}
