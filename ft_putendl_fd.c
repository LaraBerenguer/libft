/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larberen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 20:51:48 by larberen          #+#    #+#             */
/*   Updated: 2026/01/21 20:51:48 by larberen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}

/*int	main(void)
{
	int	fds[] = {1, 2};
	char	*string = "hello there";

	int	 i = 0;
	while (i < 2)
	{
		ft_putendl_fd(string, fds[i]);
		i++;
	}
	return (0);
}*/