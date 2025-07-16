/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:47:48 by araveala          #+#    #+#             */
/*   Updated: 2023/11/22 11:51:26 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_find_end(int c)
{
	int	i;

	i = 0;
	if (c <= 0)
	{
		i++;
		c = c * -1;
	}
	while (c != 0)
	{
		c = c / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*new;
	int		i;
	long	num;

	num = (long)n;
	i = ft_find_end(n);
	new = (char *)ft_calloc(sizeof(char), i + 1);
	if (new == NULL)
		return (NULL);
	if (num < 0)
	{
		new[0] = '-';
		num = num * -1;
	}
	i--;
	while (num > 9)
	{
		new[i] = num % 10 + 48;
		num = num / 10;
		--i;
	}
	new[i] = num + 48;
	return (new);
}
