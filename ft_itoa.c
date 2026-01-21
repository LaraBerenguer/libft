/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larberen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 20:25:29 by larberen          #+#    #+#             */
/*   Updated: 2026/01/19 20:25:29 by larberen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_num_len(int n)
{
	int	flag;
	int	num;
	size_t	i;

	flag = 1;
	num = n;
	if (n < 0)
	{
		flag = -1;
		num = n * -1;
	}
	i = 0;
	while (num > 0)
	{
		num = num / 10;
		i++;
	}
	if (flag < 0)
		return (i + 1);
	else
		return (i);	
}

char	*ft_itoa(int n)
{
	int	neg;
	int	i;
	char	*str;
	int	num;
	int	num_len;

	num_len = ft_num_len(n);
	str = (void *)malloc(num_len + 1);
	neg = 1;
	num = n;
	if (n < 0)
	{
		neg = -1;
		num = n * -1;
	}
	i = num_len - 1;
	
	str[num_len] = '\0';

	if (neg < 0)	
	{
		while (i > 0)
		{
			str[i] = (num % 10) + '0';
			num = num / 10;
			i--;		
		}
		str[0] = '-';
	}
	else
	{
		while (i >= 0)
		{
			str[i] = (num % 10) + '0';
			num = num / 10;
			i--;		
		}
	}
	return (str);
}


/*#include <stdlib.h>
#include <stdio.h>
int	main(void)
{
	char	*res;

	res = ft_itoa(0);
	printf("0 → %s\n", res);
	free(res);
	res = ft_itoa(42);
	printf("42 → %s\n", res);
	free(res);
	res = ft_itoa(-42);
	printf("-42 → %s\n", res);
	free(res);
	res = ft_itoa(123456);
	printf("123456 → %s\n", res);
	free(res);
	res = ft_itoa(-98765);
	printf("-98765 → %s\n", res);
	free(res);
	return (0);
}*/