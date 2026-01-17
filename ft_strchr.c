/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larberen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 21:39:13 by larberen          #+#    #+#             */
/*   Updated: 2026/01/17 21:39:13 by larberen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if ((char)c == s[i])
			return ((char *)(s + i));
		i++;
	}
	if ((char)c == '\0')
		return ((char *)(s + i));
	return (NULL);
}

/*#include <stdio.h>
int	main(void)
{
	char	s[] = "abcdefgh";
	int	c = 'e';
	printf("S):  %p\n", s);
	void * r = ft_strchr(s, c);
	printf("S):  %p\n", r);
	return (0);
}*/