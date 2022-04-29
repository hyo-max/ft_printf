/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojpark <hyojpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:49:15 by hyojpark          #+#    #+#             */
/*   Updated: 2021/11/19 14:49:15 by hyojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*emptystr(void)
{
	char	*substring;

	substring = (char *)malloc(sizeof(char) * 1);
	if (!substring)
		return (NULL);
	substring[0] = '\0';
	return (substring);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	i = 0;
	if (s_len < (start + len) && start > s_len && s_len < len)
	{
		substring = emptystr();
		return (substring);
	}
	if (len < s_len)
		substring = (char *)malloc(sizeof(char) * len + 1);
	else
		substring = (char *)malloc(sizeof(char) * s_len + 1);
	if (!substring)
		return (NULL);
	while (s[start] != '\0' && start <= s_len && i < len)
		substring[i++] = s[start++];
	substring[i] = '\0';
	return (substring);
	return (NULL);
}
