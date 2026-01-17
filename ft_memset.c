/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larberen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 13:22:33 by larberen          #+#    #+#             */
/*   Updated: 2026/01/17 13:22:33 by larberen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)str)[i] = c;
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char	c[] = "holi"; //not * not string literal, can be editable this way
	ft_memset(c, 'a', 2);
	printf("After memset():  %s\n", c);
	return (0);
}*/