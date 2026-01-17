/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larberen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 22:15:17 by larberen          #+#    #+#             */
/*   Updated: 2026/01/17 22:15:17 by larberen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			i;

	if (n == 0)
		return (0);
	i = 0;
	a = ((unsigned char *)s1);
	b = ((unsigned char *)s2);
	while (i < n)
	{
		if (a[i] != b[i])
			return (a[i] - b[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
	char	s1[] = "ABC";
	char	s2[] = "AB";
	size_t	n = 2;
	printf("%d\n", ft_strncmp(s1, s2, n));
	return (0);
}*/