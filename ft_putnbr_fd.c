/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larberen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 19:05:55 by larberen          #+#    #+#             */
/*   Updated: 2026/01/22 19:05:55 by larberen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	long	num;
	int		num_int;

	num = n;
	num_int = 0;
	if (n < 0)
	{
		write(fd, "-", 1);
		num = -num;
	}
	if (num >= 10)
	{
		num_int = num / 10;
		ft_putnbr_fd(num_int, fd);
	}
	c = (num % 10) + '0';
	write(fd, &c, 1);
}

/*int	main(void)
{
	int	nums[] = {1, 0, -55, 1042};
	int	 i = 0;
	while (i < 4)
	{
		ft_putnbr_fd(nums[i], 1);
		i++;
	}
	return (0);
}*/