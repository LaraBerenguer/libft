/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larberen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 21:54:53 by larberen          #+#    #+#             */
/*   Updated: 2026/01/31 18:53:14 by larberen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

/* #include <stdio.h>
int	main(void)
{
	t_list	a;
	t_list	b;
	t_list	new;
	t_list	*list;
	t_list	*empty_list;

	list = &a;
	empty_list = NULL;

	a.content = "Node A";
	a.next = &b;

	b.content = "Node B";
	b.next = NULL;

	new.content = "Node New";
	new.next = NULL;

	ft_lstadd_back(&list, &new);
	while (list)
	{
		printf("%s\n", (char *)list->content);
		list = list->next;
	}
	ft_lstadd_back(&empty_list, &new);
	printf("Empty:\n%s\n", (char *)empty_list->content);
	list = empty_list->next;
	return (0);
} */
