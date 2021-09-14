/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 13:38:20 by mbucci            #+#    #+#             */
/*   Updated: 2021/09/14 13:20:00 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *str, char c)
{
	int	count;
	int	i;
	int	trigger;

	i = -1;
	count = 0;
	trigger = 0;
	while (str[++i] != '\0')
	{
		if (str[i] != c && trigger == 0)
		{
			trigger = 1;
			count++;
		}
		else if (str[i] == c)
			trigger = 0;
	}
	return (count);
}

static char	*ft_word_dup(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *)malloc(end - start + 1);
	if (!word)
		return (NULL);
	while (start < end)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	size_t	count;
	int		start;
	char	**tab;

	tab = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!s || !tab)
		return (NULL);
	i = -1;
	count = 0;
	start = -1;
	while (++i <= (int)ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == (int)ft_strlen(s)) && start >= 0)
		{
			tab[count++] = ft_word_dup(s, start, i);
			start = -1;
		}
	}
	tab[count] = NULL;
	return (tab);
}
