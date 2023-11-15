/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicalvez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:26:35 by vicalvez          #+#    #+#             */
/*   Updated: 2023/11/07 23:48:37 by vicalvez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static int	ft_get_word_len(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	*ft_get_word(const char *s, char c)
{
	int		word_len;
	char	*word;

	word_len = ft_get_word_len(s, c);
	word = ft_substr((char *)s, 0, word_len);
	word[word_len] = 0;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**result;

	i = 0;
	j = 0;
	result = calloc(ft_count_words(s, c) + 1, sizeof(char *));
	if (!result)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			result[j] = ft_get_word((char *)(s + i), c);
			i += ft_get_word_len((char *)(s + i), c);
			j++;
		}
		while (s[i] && s[i] != c)
			i++;
	}
	result[j] = NULL;
	return (result);
}
