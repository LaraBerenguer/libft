/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larberen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 21:05:59 by larberen          #+#    #+#             */
/*   Updated: 2026/01/28 21:05:59 by larberen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		ptr = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = ptr;
	}
}

/* void	ft_del(void *del)
{
	free(del);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	t_list	*lst;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	node3 = malloc(sizeof(t_list));

	node1->content = malloc(64);
	node2->content = malloc(64);
	node3->content = malloc(64);

	ft_strlcpy(node1->content, "Node A", 100);
	ft_strlcpy(node2->content, "Node B", 100);
	ft_strlcpy(node3->content, "Node C", 100);

	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	lst = node1;

	printf("Before clear:\n");
	while (lst)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}

	lst = node1;
	ft_lstclear(&lst, ft_del);

	if (!lst)
		printf("After: empty\n");

	return (0);
} */