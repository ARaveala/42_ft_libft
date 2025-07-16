/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:08:54 by araveala          #+#    #+#             */
/*   Updated: 2023/11/22 12:35:55 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new;

	new = ft_calloc(sizeof(char), ft_strlen(s1) + 1);
	if (new == NULL)
		return (NULL);
	ft_strlcpy(new, s1, ft_strlen(s1) + 1);
	return (&*new);
}
