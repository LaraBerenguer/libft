/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larberen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 20:01:19 by larberen          #+#    #+#             */
/*   Updated: 2026/01/21 20:01:19 by larberen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*void	ft_change(unsigned int, char* c)
{
	if (*c == 32)
		*c = '_';
}

#include <stdio.h>
int	main(void)
{
	char	strings[4][100] = {"Hola que tal", "ft tumadre", "lololo", ""};
	int		i;

	i = 0;
	while (i < 4)
	{
		printf("Original: %s\n", strings[i]);
		ft_striteri(strings[i], ft_change);
		printf("Result: %s\n", strings[i]);
		i++;
	}
	return (0);
}*/