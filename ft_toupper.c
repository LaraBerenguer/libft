/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larberen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 21:21:33 by larberen          #+#    #+#             */
/*   Updated: 2026/01/17 21:21:33 by larberen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

/*#include <stdio.h>
int	main(void)
{
	char	may = 'A';
	char	min = 'a';
	char	sym = '\\';
	char	spc = ' ';

	printf("Original: %c %c %c %c\n", may, min, sym, spc);

	printf("ft_toupper(may) = %c\n", ft_ft_toupper(may));
	printf("ft_toupper(min) = %c\n", ft_ft_toupper(min));
	printf("ft_toupper(sym) = %c\n", ft_ft_toupper(sym));
	printf("ft_toupper(spc) = %c\n", ft_ft_toupper(spc));
	return (0)
}*/