/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:05:04 by araveala          #+#    #+#             */
/*   Updated: 2023/11/20 11:44:04 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	c;
	size_t	dst_l;

	if (!dstsize)
		return (ft_strlen(src));
	dst_l = ft_strlen(dst);
	if (dstsize <= dst_l)
		return (dstsize + ft_strlen(src));
	c = ft_strlen(dst);
	i = 0;
	while (dst_l < (dstsize - 1) && src[i] != '\0')
	{
		dst[dst_l] = src[i];
		dst_l++;
		i++;
	}
	dst[dst_l] = '\0';
	return (c + ft_strlen(src));
}
