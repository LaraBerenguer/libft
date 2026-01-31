/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larberen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 20:45:30 by larberen          #+#    #+#             */
/*   Updated: 2026/01/28 20:45:30 by larberen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}

void	ft_free(void *content)
{
	free(content);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	t_list	*a;

	a = malloc(sizeof(t_list));
	a->content = malloc(64);
	a->next = NULL;
	ft_strlcpy(a->content, "Node A", 10);
	printf("Before:\n%s\n", (char *)a->content);
	ft_lstdelone(a, ft_free);
	printf("After: \nNode deleted\n");
	return (0);
}*/
