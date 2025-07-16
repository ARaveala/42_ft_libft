/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:53:09 by araveala          #+#    #+#             */
/*   Updated: 2023/11/20 13:45:11 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*p;
	char		chr;

	chr = c;
	p = NULL;
	while (*s != '\0')
	{
		if (*s == chr)
			p = s;
		s++;
	}
	if (chr == 0)
		return ((char *)s);
	return ((char *)p);
}
