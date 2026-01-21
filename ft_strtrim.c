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

int	find_start(char const *s1, char const *set)
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

int	find_end(char const *s1, char const *set, int len)
{
	int	i;
	int	j;
	int	match;

	i = len - 1;
	while (i > 0)
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
	int	trim_len;
	int	s1_len;
	int	start_index;
	int	end_index;
	int	i;
	int	j;

	s1_len = ft_strlen(s1);
	start_index = find_start(s1, set);
	end_index = find_end(s1, set, s1_len);
	trim_len = end_index - start_index + 1;
	trim_s = (void *)malloc(trim_len + 1);	
	i = start_index;
	j = 0;
	while (i < end_index)
	{
		trim_s[j] = s1[i];
		i++;
		j++;
	}
	trim_s[i] = '\0';
	return (trim_s);
}

int	main(void)
{
	char	set[] = "&ap";
	char	s[] = "phola&";
	//char	s[] = "hola&p";
	//char	s[] = "&pahola";

	char	*result = ft_strtrim(s, set);
	free(result);
	return (0);
}