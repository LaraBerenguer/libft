/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larberen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 17:41:07 by larberen          #+#    #+#             */
/*   Updated: 2026/01/17 17:41:07 by larberen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void *s1, void *s2, size_t n)
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
	char	s2[] = "ABD";
	size_t	n = 3;
	printf("%d\n", ft_memcmp(s1, s2, n));
	return (0);
}*/