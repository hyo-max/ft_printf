/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojpark <hyojpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 18:38:52 by hyojpark          #+#    #+#             */
/*   Updated: 2022/01/30 19:42:26 by hyojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	space_chack(char a)
{
	if (a == '\t' || a == '\n' || a == '\v' || a == '\f'
		|| a == '\r' || a == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	long long int	result;
	int				negative;
	int				i;

	result = 0;
	negative = 1;
	i = 0;
	while (space_chack(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			negative *= -1;
	}
	while (str[i] != '\0' && '0' <= str[i] && str[i] <= '9')
	{
		if (result * negative > 2147483647)
			return (-1);
		else if (result * negative < -2147483648)
			return (0);
		else
			result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * negative);
}
