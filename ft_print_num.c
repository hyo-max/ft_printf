/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojpark <hyojpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:45:56 by hyojpark          #+#    #+#             */
/*   Updated: 2022/05/04 20:48:15 by hyojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_get_len(unsigned int num)
{
	int	count;

	count = 1;
	while (num > 9)
	{
		num /= 10;
		count++;
	}
	return (count);
}

char *ft_uitoa(unsigned int num)
{
	int		len;
	char	*result;

	len = ft_get_len(num);
	result = (char *)malloc(sizeof(char) * len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	while (len)
	{
		len--;
		result[len] = (num % 10) + '0';
		num /= 10;
	}
	return (result);
}

int	ft_print_unum(unsigned int num)
{
	char	*str;
	int		str_len;

	str = ft_uitoa(num);
	str_len = ft_print_str(str);
	free(str);

	return (str_len);
}

int	ft_print_num(int num)
{
	char	*str;
	int		str_len;

	str = ft_itoa(num);
	str_len = ft_print_str(str);
	free(str);

	return (str_len);
}

