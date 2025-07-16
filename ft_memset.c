/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:19:01 by araveala          #+#    #+#             */
/*   Updated: 2023/11/22 12:09:23 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*buffer;
	unsigned char	*return_p;

	return_p = b;
	buffer = b;
	while (len-- > 0)
	{
		*buffer = (unsigned char)c;
		buffer++;
		b++;
	}
	return (return_p);
}
