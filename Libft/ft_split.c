/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmamisoa <rmamisoa@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:24:56 by rmamisoa          #+#    #+#             */
/*   Updated: 2024/03/06 13:44:33 by rmamisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdlib.h>
#include <stdio.h>
#include <string.h>*/
#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	word_num;

	i = 0;
	word_num = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			word_num++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (word_num);
}

static char	*ft_put_in_tab(char *tab, const char *s, int i, int word_len)
{
	int	j;

	j = 0;
	while (word_len > 0)
	{
		tab[j] = s[i - word_len];
		j++;
		word_len--;
	}
	tab[j] = '\0';
	return (tab);
}

static char	**free_tab(char **tab, int i)
{
	while (i > 0)
	{
		i--;
		free(tab[i]);
	}
	free(tab);
	return (0);
}

static char	**ft_split_words(char const *s, char c, char **tab, int word_num)
{
	int	i;
	int	word;
	int	word_len;

	i = 0;
	word = 0;
	word_len = 0;
	while (word < word_num)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			word_len++;
		}
		tab[word] = malloc(sizeof(char) * (word_len + 1));
		if (!tab)
			return (free_tab(tab, word));
		ft_put_in_tab(tab[word], s, i, word_len);
		word_len = 0;
		word++;
	}
	tab[word] = 0;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		num_word;

	num_word = ft_count_words(s, c);
	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (num_word + 1));
	if (!tab)
		return (NULL);
	tab = ft_split_words(s, c, tab, num_word);
	return (tab);
}

/*int main() 
{
	char str[] = "Bonjour";
	char **result = ft_split(str, ' ');

	int i = 0;
	while (result[i] != NULL) 
	{
        	printf("%s\n", result[i]);
        	free(result[i]);
		i++;
    }
    
    return 0;
}*/
