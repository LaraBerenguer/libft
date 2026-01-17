/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larberen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 13:46:04 by larberen          #+#    #+#             */
/*   Updated: 2026/01/17 13:46:04 by larberen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = '\0';
		i++;
	}
}

/*#include <stdio.h>

int	main(void)
{
	char	c[] = "holi"; //not * not string literal, can be editable this way
	printf("Before ft_bzero():  %s\n", c);
	ft_bzero(c, 2);
	printf("After ft_bzero():  %s\n", c);
	return (0);
}*/