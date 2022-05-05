/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojpark <hyojpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 20:11:31 by hyojpark          #+#    #+#             */
/*   Updated: 2022/05/05 16:27:31 by hyojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_print_str(char *str)
{
	int	str_len;

	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	str_len = 0;
	while (str[str_len])
		str_len++;
	write(1, str, str_len);
	return (str_len);
}
