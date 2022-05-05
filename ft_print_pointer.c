/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojpark <hyojpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 10:40:37 by hyojpark          #+#    #+#             */
/*   Updated: 2022/05/05 17:48:08 by hyojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	conversion(unsigned long long n, char *hex)
{
	if (n >= 16)
		conversion(n / 16, hex);
	ft_print_char(hex[n % 16]);
}

int	ft_hex(unsigned long long num)
{
	char			*hex;
	int				num_len;
	unsigned long long	temp;

	num_len = 0;
	temp = num;
	if (num == 0)
		return (write(1, "0", 1));
	while (temp > 0)
	{
		num_len++;
		temp /= 16;
	}
	hex = "0123456789abcdef";
	conversion(num, hex);
	return (num_len);
}

int	ft_print_pointer(unsigned long long a)
{
	int		len;

	len = 0;
	len += write(1, "0x", 2);
	len += ft_hex(a);
	return (len);
}