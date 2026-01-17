/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larberen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 22:04:36 by larberen          #+#    #+#             */
/*   Updated: 2026/01/17 22:04:36 by larberen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	size_t			position;

	i = 0;
	while (s[i])
	{
		if ((char)c == s[i])
			position = i;
		i++;
	}
	if ((char)c == '\0')
		position = i;
	if (position > 0)
		return (s + position);
	return (NULL);
}

/*#include <stdio.h>
int	main(void)
{
	char	s[] = "abcdefgh";
	int	c = 'e';
	printf("S):  %p\n", s);
	void * r = ft_strrchr(s, c);
	printf("S):  %p\n", r);
	return (0);
}*/