/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larberen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 19:46:35 by larberen          #+#    #+#             */
/*   Updated: 2026/01/19 19:46:35 by larberen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;
	size_t	i;
	size_t	s1_len;

	s1_len = ft_strlen(s1);
	new_string = (void *)malloc(s1_len + ft_strlen(s2) + 1);
	if (!new_string)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		new_string[i] = s1[i];
		i++;
	}
	while (s2[i - s1_len])
	{
		new_string[i] = s2[i - s1_len];
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}

/*#include <stdio.h>
int	main(void)
{
	char	s1[] = "When I was "; 
	char	s2[] = "a young boy";

	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}*/