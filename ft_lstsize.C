/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.C                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larberen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 21:32:54 by larberen          #+#    #+#             */
/*   Updated: 2026/01/26 21:32:54 by larberen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_lstsize(t_list *lst);
{
	size_t	i;
	void	*ptr;

	if (!lst)
		return (0);
	ptr = lst;
	i = 1;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	return(i);
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