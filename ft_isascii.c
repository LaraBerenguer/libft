/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larberen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 19:30:26 by larberen          #+#    #+#             */
/*   Updated: 2026/01/16 19:30:26 by larberen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
int	main(void)
{
	char	c = -2;
	int r = ft_isascii((unsigned char)c);
	printf("%d", r);
	return (0);
}*/