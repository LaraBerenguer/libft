/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larberen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 19:17:17 by larberen          #+#    #+#             */
/*   Updated: 2026/01/31 17:58:51 by larberen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (void *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

/*#include <stdio.h>
int	main(void)
{
	char	*str = "hola lista";
	int		n = 42;
	t_list	*node1;
	t_list	*node2;

	node1 = ft_lstnew(str);
	node2 = ft_lstnew(&n);

	printf("node1 content (string): %s\n", (char *)node1->content);
	printf("node1 next: %p\n", (void *)node1->next);

	printf("node2 content (int): %d\n", *(int *)node2->content);
	printf("node2 next: %p\n", (void *)node2->next);

	free(node1);
	free(node2);
	return (0);
}*/