/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojpark <hyojpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:15:43 by hyojpark          #+#    #+#             */
/*   Updated: 2022/01/29 03:33:22 by hyojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_count(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (word);
}

char	*put_word(char *result, char const *s, int j, int word_len)
{
	int	i;

	i = 0;
	while (word_len > 0)
		result[i++] = s[j - word_len--];
	result[i] = '\0';
	return (result);
}

int	split2(char **result, char const *s, char c, int word_num)
{
	int	i;
	int	j;
	int	word_len;

	i = 0;
	j = 0;
	word_len = 0;
	while (s[j] && i < word_num)
	{
		while (s[j] && s[j] == c)
			j++;
		while (s[j] && s[j] != c)
		{
			j++;
			word_len++;
		}
		result[i] = (char *)malloc(sizeof(char) * (word_len + 1));
		if (!result)
			return (i);
		put_word(result[i], s, j, word_len);
		word_len = 0;
		i++;
	}
	result[i] = 0;
	return (-1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		word_num;
	int		i;

	if (!s)
		return (NULL);
	word_num = word_count(s, c);
	result = (char **)malloc(sizeof(char *) * (word_num + 1));
	if (!result)
		return (NULL);
	i = split2(result, s, c, word_num);
	if (i >= 0)
	{
		while (i >= 0)
			free(result[i--]);
		free(result);
	}
	return (result);
}
