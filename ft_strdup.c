/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larberen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 14:34:33 by larberen          #+#    #+#             */
/*   Updated: 2026/01/18 14:34:33 by larberen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);
size_t	ft_strlen(const char *str);

char	*ft_strdup(const char *s)
{
	size_t	strlen;
	char	*new_string;

	strlen = ft_strlen(s);
	new_string = (char *)malloc(strlen + 1);
	if (!new_string)
		return (NULL);
	ft_memcpy(new_string, s, strlen + 1);
	return (new_string);
}

/*#include <stdio.h>
int	main(void)
{
	char	str[] = "lorem ipsum dolor sit amet";
	char	*d;
	d = ft_strdup(str);
	printf("original: %s\n", s);
	printf("duplicate: %s\n", d);
	return (0);
}*/