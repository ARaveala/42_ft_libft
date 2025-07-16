/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:42:32 by araveala          #+#    #+#             */
/*   Updated: 2023/11/20 11:48:50 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = ((unsigned char *)s1);
	p2 = ((unsigned char *)s2);
	i = 0;
	while (i != n)
	{
		if ((p1[i] != p2[i]) || (p1[i] == '\0' || p2[i] == '\0'))
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}
