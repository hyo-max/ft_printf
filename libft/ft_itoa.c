/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojpark <hyojpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 02:53:30 by hyojpark          #+#    #+#             */
/*   Updated: 2022/02/01 22:25:40 by hyojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_len(long long num)
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

int	get_negative(long long num)
{
	int	check_neg;

	check_neg = 0;
	if (num < 0)
		check_neg = 1;
	return (check_neg);
}

char	*ft_itoa(int n)
{
	char		*result;
	int			is_negative;
	int			len;
	long long	num;

	num = (long long)n;
	is_negative = get_negative(num);
	if (num < 0)
		num *= -1;
	len = get_len(num) + is_negative;
	result = (char *)malloc(sizeof(char) * len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	while (len > is_negative)
	{
		len--;
		result[len] = (num % 10) + '0';
		num /= 10;
	}
	if (is_negative)
		result[0] = '-';
	return (result);
}
