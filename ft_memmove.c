/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larberen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 14:35:03 by larberen          #+#    #+#             */
/*   Updated: 2026/01/17 14:35:03 by larberen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;

	if (!dest || !src || !n)
		return (dest);
	if (dest > src)
	{
		i = n;
		while (i > 0)
		{
			--i;
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}

/*#include <stdio.h>
int	main(void)
{
	char	c[] = "abcdefgh";
	char	*d = c + 4;
	printf("C Before ft_memmove():  %s\n", c);
	printf("D Before ft_memmove():  %s\n", d);
	ft_memmove(d, c, 2);
	//d[2] = '\0';
	printf("C After ft_memmove():  %s\n", c);
	printf("D After ft_memmove():  %s\n", d);
	return (0);
}*/