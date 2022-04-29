/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojpark <hyojpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 22:13:53 by hyojpark          #+#    #+#             */
/*   Updated: 2022/01/29 03:43:22 by hyojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	nee_len;

	if (*needle == '\0')
		return ((char *)haystack);
	nee_len = ft_strlen(needle);
	while (*haystack && len-- >= nee_len)
	{
		if (ft_memcmp(haystack, needle, nee_len) == 0)
		{
			return ((char *)haystack);
		}
		haystack++;
	}
	return (NULL);
}
