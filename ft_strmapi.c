/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larberen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 19:28:53 by larberen          #+#    #+#             */
/*   Updated: 2026/01/21 19:28:53 by larberen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_string;
	size_t	i;

	new_string = (void *)malloc(ft_strlen(s) + 1);
	i = 0;
	while (s[i])
	{
		new_string[i] = f(i, s[i]);
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}

/*char	ft_capitalize(unsigned int i, char c)
{
	if (i == 0)
		return (ft_toupper(c));
	else
		return (ft_tolower(c));
}

#include <stdio.h>
int	main(void)
{
	char	*strings[3] = {"abcd", "hola", "42barcelonaaa"};
	char	*result;
	int		i;

	i = 0;
	while (i < 3)
	{
		result = ft_strmapi(strings[i], ft_capitalize);
		printf("Original: %s -> Result: %s\n", strings[i], result);
		free(result);
		i++;
	}
	return (0);
}*/