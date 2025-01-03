/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkostyla <wkostyla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 16:58:11 by wkostyla          #+#    #+#             */
/*   Updated: 2025/01/03 14:27:16 by wkostyla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Funkcja ft_split dzieli łańcuch znaków s na tablicę łańcuchów, rozdzielając go
** na słowa, używając znaku c jako separatora.
**
** Pomocnicze funkcje:
** - ft_count_words: Liczy liczbę słów w łańcuchu s, rozdzielonych znakiem c.
** - ft_word_len: Oblicza długość jednego słowa w łańcuchu s.
** - ft_allocate: Alokuje pamięć i kopiuje słowo z łańcucha s 
od indeksu start do end.
** - ft_free: Zwalnia pamięć zaalokowaną dla tablicy wynikowej w przypadku błędu.
*/

#include "libft.h"

static int	ft_count_words(char const *s, char c)
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
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static int	ft_word_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

static char	*ft_allocate(char const *s, int start, int end)
{
	char	*word;
	int		i;

	word = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

static char	**ft_free(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		j;

	i = 0;
	j = 0;
	split = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!split)
		return (NULL);
	while (s[i])
	{
		if (s[i] && s[i] != c)
		{
			split[j] = ft_allocate(s, i, i + ft_word_len(&s[i], c));
			if (!split[j])
				return (ft_free(split));
			j++;
			i += ft_word_len(&s[i], c);
		}
		else
			while (s[++i] == c)
				;
	}
	split[j] = NULL;
	return (split);
}

/*static void	print_split_result(char **result)
{
	int	i;

	if (!result)
	{
		printf("Error: Allocation failed or invalid input.\n");
		return ;
	}
	i = 0;
	while (result[i]) // Iteruj i wyświetlaj słowa
	{
		printf("Word %d: %s\n", i + 1, result[i]);
		i++;
	}
}

int	main(void)
{
	char *str = ",,,Hello,,world,this,is,a,test";
	char delimiter = ',';

	printf("Testing ft_split with input string: \"%s\" and delimiter: '%c'\n",
		str, delimiter);

	// Wywołanie ft_split
	char **result = ft_split(str, delimiter);

	// Wyświetlanie wyniku
	print_split_result(result);

	// Zwolnienie pamięci
	if (result)
	{
		int i = 0;
		while (result[i])
		{
			free(result[i]);
			i++;
		}
		free(result);
	}
	return (0);
}*/