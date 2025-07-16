/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:04:10 by araveala          #+#    #+#             */
/*   Updated: 2023/11/22 11:59:08 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*save1;
	unsigned char	*save2;

	save1 = (unsigned char *)s1;
	save2 = (unsigned char *)s2;
	if (!s1 && !s2)
		return (0);
	while (n)
	{
		if (*save1 != *save2)
			return (*save1 - *save2);
		save1++;
		save2++;
		n--;
	}
	return (0);
}
