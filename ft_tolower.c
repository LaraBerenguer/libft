/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larberen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 21:33:48 by larberen          #+#    #+#             */
/*   Updated: 2026/01/17 21:33:48 by larberen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
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

	printf("ft_tolower(may) = %c\n", ft_ft_tolower(may));
	printf("ft_tolower(min) = %c\n", ft_ft_tolower(min));
	printf("ft_tolower(sym) = %c\n", ft_ft_tolower(sym));
	printf("ft_tolower(spc) = %c\n", ft_ft_tolower(spc));
	return (0)
}*/