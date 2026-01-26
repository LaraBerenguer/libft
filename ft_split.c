/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larberen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 18:22:16 by larberen          #+#    #+#             */
/*   Updated: 2026/01/23 18:22:16 by larberen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	size_t	i;
	size_t	j;
	int		start;

	if (!s)
		return (NULL);
	matrix = malloc((count_words(s, c) + 1) * 8);
	if (!matrix)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			matrix[j] = ft_substr(s, start, i - start);
			j++;
		}
		else
			i++;
	}
	matrix[j] = NULL;
	return (matrix);
}

/*#include <stdio.h>
int	main(void)
{
	char	*tests[] = {
		"holaccquectalccamigos",
		"cholaccquectalccamigos",
		"cccc",
		"hola amigoscc",
		"ccholac amigoscc",
		"",
		" ",
		"c",
		NULL
	};
	char	c = 'c';
	char	**result;
	int		i;
	int		j;

	i = 0;
	while (tests[i])
	{
		printf("TEST %d: \"%s\"\n", i, tests[i]);
		result = ft_split(tests[i], c);
		j = 0;
		while (result && result[j])
		{
			printf("  [%d] \"%s\"\n", j, result[j]);
			free(result[j]);
			j++;
		}
		free(result);
		printf("\n");
		i++;
	}
	return (0);
}*/
