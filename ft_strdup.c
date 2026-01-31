/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larberen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 14:34:33 by larberen          #+#    #+#             */
/*   Updated: 2026/01/27 20:51:41 by larberen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

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
	printf("original: %s\nOriginal pointer: %p\n", str, &str);
	printf("duplicate: %s\nDuplicate pointer: %p\n", d, &d);
	return (0);
}*/