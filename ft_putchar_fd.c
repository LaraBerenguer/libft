/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larberen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 20:26:37 by larberen          #+#    #+#             */
/*   Updated: 2026/01/21 20:26:37 by larberen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int	main(void)
{
	int	fds[] = {1, 2};
	int	 i = 0;
	while (i < 2)
	{
		ft_putchar_fd('c', fds[i]);
		i++;
	}
	return (0);
}*/