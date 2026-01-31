/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larberen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 21:32:54 by larberen          #+#    #+#             */
/*   Updated: 2026/01/27 21:45:31 by larberen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
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
