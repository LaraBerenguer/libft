/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larberen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 18:21:52 by larberen          #+#    #+#             */
/*   Updated: 2026/01/30 18:21:52 by larberen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*void	ft_cat(void *n)
{
	ft_strlcat((char *)n, " holi", 64);
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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

	strcpy(node1->content, "5");
	strcpy(node2->content, "6");
	strcpy(node3->content, "7");

	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	lst = node1;

	printf("Before ft:\n");
	while (lst)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}

	lst = node1;
	ft_lstiter(lst, ft_cat);

	printf("After ft:\n");
	while (lst)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
	return (0);
}*/