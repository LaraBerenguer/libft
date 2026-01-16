/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larberen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 19:38:47 by larberen          #+#    #+#             */
/*   Updated: 2026/01/16 19:38:47 by larberen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if ((c > 32 && c <= 126))
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
int	main(void)
{
	char	c = 32;
	int r = ft_isprint((unsigned char)c);
	printf("%d", r);
	return (0);
}*/