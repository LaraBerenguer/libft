/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larberen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 17:12:55 by larberen          #+#    #+#             */
/*   Updated: 2026/01/17 17:12:55 by larberen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	size_t			i;

	if (!s || !c || !n)
		return (NULL);
	i = 0;
	while (i < n)
	{
		if (((unsigned char)c) == ((unsigned char *)s)[i])
			return (s + i);
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
int	main(void)
{
	char	s[] = "abcdefgh";
	int	c = 'e';
	size_t	n = 3;
	printf("S):  %p\n", s);
	void * r = ft_memchr(s, c, n);
	printf("S):  %p\n", r);
	return (0);
}*/