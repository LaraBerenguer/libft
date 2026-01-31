/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larberen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 20:58:44 by larberen          #+#    #+#             */
/*   Updated: 2026/01/31 17:59:19 by larberen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*#include <stdio.h>
int	main(void)
{
	t_list	a;
	t_list	b;
	t_list	c;
	t_list	*last;

	a.content = "Node A";
	a.next = &b;

	b.content = "Node B";
	b.next = &c;

	c.content = "Node C";
	c.next = NULL;

	last = ft_lstlast(&a);
	if (last)
		printf("Last node: %s\n", (char *)last->content);
	else
		printf("Empty list!\n");

	return (0);
}*/