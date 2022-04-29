/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojpark <hyojpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 19:16:13 by hyojpark          #+#    #+#             */
/*   Updated: 2022/01/29 03:41:57 by hyojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long	long_n;
	char		c;

	if (fd < 0)
		return ;
	long_n = n;
	if (n < 0)
	{
		write(fd, "-", 1);
		long_n *= -1;
	}
	if (long_n > 9)
		ft_putnbr_fd(long_n / 10, fd);
	c = '0' + (long_n % 10);
	write(fd, &c, 1);
}
