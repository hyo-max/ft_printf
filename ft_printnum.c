/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojpark <hyojpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:45:56 by hyojpark          #+#    #+#             */
/*   Updated: 2022/05/04 14:34:24 by hyojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnum(int num)
{
	char	*str;
	int		str_len;

	str = ft_itoa(num);
	str_len = ft_printstr(str);
	free(str);

	return (str_len);
}

