/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larberen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 19:23:51 by larberen          #+#    #+#             */
/*   Updated: 2026/01/20 19:23:51 by larberen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	find_start(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	match;

	i = 0;
	while (s1[i])
	{
		j = 0;
		match = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				match = -1;
			j++;
		}
		if (match == 0)
			return (i);
		i++;
	}
	return (i);
}

static int	find_end(char const *s1, char const *set, int len)
{
	int	i;
	int	j;
	int	match;

	i = len - 1;
	while (i >= 0)
	{
		j = 0;
		match = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				match = -1;
			j++;
		}
		if (match == 0)
			return (i);
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim_s;
	int		start;
	int		end;
	int		i;
	int		j;

	if (!s1 || !set)
		return (NULL);
	start = find_start(s1, set);
	end = find_end(s1, set, ft_strlen(s1));
	if (start > end)
		return (ft_strdup(""));
	trim_s = (void *)malloc(end - start + 2);
	if (!trim_s)
		return (NULL);
	i = start;
	j = 0;
	while (i <= end)
	{
		trim_s[j] = s1[i];
		i++;
		j++;
	}
	trim_s[j] = '\0';
	return (trim_s);
}

/*#include <stdio.h>
int	main(void)
{
	//char	set[] = "&bp";
	char	set[] = "*";
	//char	s[] = "phola&";
	char	s[] = "***hola**";
	//char	s[] = "hola&p";
	//char	s[] = "&pahola";

	char	*result = ft_strtrim(s, set);
	printf("result: %s\n", result);
	free(result);
	return (0);
}*/