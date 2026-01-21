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
	int	position;
	int	i;

	i = 0;
	position = -1;
	while (s[i])
	{
		if ((char)c == s[i])
			position = i;
		i++;
	}
	if ((char)c == '\0')
		return ((char *)(s + i));
	if (position != -1)
		return ((char *)(s + position));
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