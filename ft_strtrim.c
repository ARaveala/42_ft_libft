/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:35:13 by araveala          #+#    #+#             */
/*   Updated: 2023/11/22 12:54:28 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_end(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1);
	while (ft_strchr(set, s1[i]))
	{
		if (i == 0)
			return (0);
		i--;
	}
	return (i);
}

static int	ft_check_front(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (ft_strchr(set, s1[i]))
	{
		if (s1[i] == '\0')
			return (1);
		i++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		total_len;
	int		front;
	char	*trimmed_str;

	if (!s1 || !set)
		return (NULL);
	front = ft_check_front(s1, set);
	total_len = ft_check_end(s1, set) - front;
	trimmed_str = ft_substr(s1, front, total_len + 1);
	if (trimmed_str == NULL)
		return (NULL);
	return (trimmed_str);
}
