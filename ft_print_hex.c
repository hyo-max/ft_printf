/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojpark <hyojpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:30:32 by hyojpark          #+#    #+#             */
/*   Updated: 2022/05/05 17:38:28 by hyojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	hex_conversion(unsigned int n, char *hex)
{
	if (n >= 16)
		hex_conversion(n / 16, hex);
	ft_print_char(hex[n % 16]);
}

int	ft_print_hex(unsigned int num, const char format)
{
	char			*hex;
	int				num_len;
	unsigned int	temp;

	num_len = 0;
	temp = num;
	if (num == 0)
		return (write(1, "0", 1));
	while (temp > 0)
	{
		num_len++;
		temp /= 16;
	}
	if (format == 'x')
		hex = "0123456789abcdef";
	if (format == 'X')
		hex = "0123456789ABCDEF";
	hex_conversion(num, hex);
	return (num_len);
}
