/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larberen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 13:52:06 by larberen          #+#    #+#             */
/*   Updated: 2026/01/17 13:52:06 by larberen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/*#include <stdio.h>

int	main(void)
{
	char	c[] = "holi"; //not * not string literal, can be editable this way
	char	d[] = "";
	printf("Before ft_memcpy():  %s\n", d);
	ft_memcpy(d, c, 2);
	d[2] = '\0';
	printf("After ft_memcpy():  %s\n", d);
	return (0);
}*/