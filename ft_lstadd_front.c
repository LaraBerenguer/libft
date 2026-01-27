/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larberen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 20:48:53 by larberen          #+#    #+#             */
/*   Updated: 2026/01/26 20:48:53 by larberen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return (NULL) ;
	new->next = *lst;
	*lst = new;
}

/*#include <stdio.h>
int	main(void)
{
	t_list *lst;
	t_list *n1;
	t_list *n2;

	lst = NULL;
	n1 = ft_lstnew("uno");
	n2 = ft_lstnew("dos");

	ft_lstadd_front(&lst, n1);
	ft_lstadd_front(&lst, n2);

	printf("%s\n", (char *)lst->content);
	printf("%s\n", (char *)lst->next->content);
}
}*/