/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larberen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 11:02:02 by larberen          #+#    #+#             */
/*   Updated: 2026/01/18 11:02:02 by larberen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c);

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		newnum;
	int		neg;

	i = 0;
	newnum = 0;
	neg = 1;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == 45 || nptr[i] == 43)
	{
		if (nptr[i] == 45)
		{
			neg = -1;
		}
		i++;
	}
	while (ft_isdigit(nptr[i]) == 1)
	{
		newnum = newnum * 10 + (nptr[i] - '0');
		i++;
	}
	return (newnum * neg);
}

/*#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char *tests[] = {
		"5",
		"55",
		"-5",
		"+5",
		"00042",
		" 42",
		"    -42",
		"\t\n  42",
		"42abc",
		"42abc90",
		"1042.89",
		"abc42",
		"k!42",
		"--10",
		"--+-10",
		"+-10",
		"+ 10",
		"- 10",
		"",
		"   ",
		"+",
		"-",
		NULL
	};
	int i = 0;
	while (tests[i])
	{
		printf("Test: \"%s\"\n", tests[i]);
		printf("  atoi    : %d\n", atoi(tests[i]));
		printf("  ft_atoi : %d\n\n", ft_atoi(tests[i]));
		i++;
	}

	return (0);
}*/
