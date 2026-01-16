/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larberen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 19:17:38 by larberen          #+#    #+#             */
/*   Updated: 2026/01/16 19:17:38 by larberen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isdigit(int c)
{
	if ((c >= 48 && c <= 57))
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	char	c = 'a';
	int r = ft_isdigit((unsigned char)c);
	printf("%d", r);
	return (0);
}*/