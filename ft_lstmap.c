/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larberen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 19:49:58 by larberen          #+#    #+#             */
/*   Updated: 2026/01/30 19:49:58 by larberen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*content;

	new_lst = NULL;
	new_node = NULL;
	while (lst)
	{
		content = f(lst->content);
		if (!content)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			del(content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}

/* #include <stdio.h>
#include <string.h>
// f: duplicate string
void	*dup_content(void *content)
{
	char	*str;

	if (!content)
		return (NULL);
	str = strdup((char *)content);
	//ft_strlcat((char *)str, "hello", 10);
	return (str);
}

//-- del: free content
void	del_content(void *content)
{
	free(content);
}

//print strings
void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

int	main(void)
{
	t_list	*lst;
	t_list	*new_lst;

	// ===== TEST 1: list A -> B -> C =====
	lst = NULL;
	ft_lstadd_back(&lst, ft_lstnew(strdup("A")));
	ft_lstadd_back(&lst, ft_lstnew(strdup("B")));
	ft_lstadd_back(&lst, ft_lstnew(strdup("C")));

	printf("Original list:\n");
	print_list(lst);
	printf("A pointer: %p\n\n", &lst);

	new_lst = ft_lstmap(lst, dup_content, del_content);

	printf("Mapped list:\n");
	print_list(new_lst);
	printf("A pointer: %p\n\n", &new_lst);

	// Cleanup
	ft_lstclear(&lst, del_content);
	ft_lstclear(&new_lst, del_content);

	//===== TEST 2: empty list =====
	lst = NULL;
	new_lst = ft_lstmap(lst, dup_content, del_content);

	printf("\nMapped empty list:\n");
	if (!new_lst)
		printf("NULL\n");
	else
		print_list(new_lst);

	return (0);
} */