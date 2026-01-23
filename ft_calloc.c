/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larberen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 13:06:19 by larberen          #+#    #+#             */
/*   Updated: 2026/01/18 13:06:19 by larberen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*m_point;

	m_point = (void *)malloc(nelem * elsize);
	if (m_point == NULL)
		return (NULL);
	ft_bzero(m_point, nelem * elsize);
	return (m_point);
}

/*#include <stdio.h>
int	main(void)
{
	int	*i1;
	int	*i2;
	int	i;

	printf("Test 1: 5 int array\n");

	i1 = (int *)calloc(5, sizeof(int));
	i2 = (int *)ft_calloc(5, sizeof(int));

	if (!i2)
	{
		printf("ft_calloc returns NULL\n");
		return (1);
	}

	for (i = 0; i < 5; i++)
	{
		printf("calloc   [%d] = %d\n", i, i1[i]);
		printf("ft_calloc[%d] = %d\n\n", i, i2[i]);
	}

	free(i1);
	free(i2);

	printf("Test 2: 10 char array\n");

	char *c1 = (char *)calloc(10, sizeof(char));
	char *c2 = (char *)ft_calloc(10, sizeof(char));

	for (i = 0; i < 10; i++)
	{
		printf("calloc   [%d] = %d\n", i, c1[i]);
		printf("ft_calloc[%d] = %d\n\n", i, c2[i]);
	}

	free(c1);
	free(c2);

	return (0);
}*/