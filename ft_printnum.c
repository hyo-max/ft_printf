/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojpark <hyojpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:45:56 by hyojpark          #+#    #+#             */
/*   Updated: 2022/05/04 20:16:16 by hyojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


// char *ft_uitoa(int n)
// {

// }

// int	ft_print_unum(int num)
// {

// }

int	ft_print_num(int num)
{
	char	*str;
	int		str_len;

	str = ft_itoa(num);
	str_len = ft_print_str(str);
	free(str);

	return (str_len);
}

