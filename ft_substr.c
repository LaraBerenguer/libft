/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larberen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 19:02:12 by larberen          #+#    #+#             */
/*   Updated: 2026/01/19 19:02:12 by larberen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_string;
	size_t	i;
	size_t	s_len;

	i = start;
	s_len = ft_strlen(s);
	sub_string = (void *)malloc(len + 1);
	if (!sub_string)
		return (NULL);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	while (i < start + len && s[i])
	{
		sub_string[i - start] = s[i];
		i++;
	}
	sub_string[i - start] = '\0';
	return (sub_string);
}

/* #include <stdio.h>
int	main(void)
{
	char	*res;

	res = ft_substr("hola", 0, 2);
	printf("Test 1: \"hola\", 0, 2  → \"%s\"\n", res);
	free(res);
	res = ft_substr("hola", 1, 2);
	printf("Test 2: \"hola\", 1, 2  → \"%s\"\n", res);
	free(res);
	res = ft_substr("hola", 2, 10);
	printf("Test 3: \"hola\", 2, 10 → \"%s\"\n", res);
	free(res);
	res = ft_substr("hola", 4, 3);
	printf("Test 4: \"hola\", 4, 3  → \"%s\"\n", res);
	free(res);
	res = ft_substr("hola", 10, 3);
	printf("Test 5: \"hola\", 10, 3 → \"%s\"\n", res);
	free(res);
	res = ft_substr("libft", 0, 10);
	printf("Test 6: \"libft\", 0, 10 → \"%s\"\n", res);
	free(res);
	return (0);
} */