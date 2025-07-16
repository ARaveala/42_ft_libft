/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:36:16 by araveala          #+#    #+#             */
/*   Updated: 2023/11/22 12:55:20 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub_str;
	size_t			i;
	unsigned int	str_len;

	i = 0;
	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	if (str_len - start < len)
		len = str_len - start;
	if (start + len > str_len)
		len = 0;
	sub_str = (char *)ft_calloc(len + 1, sizeof(char));
	if (sub_str == NULL)
		return (NULL);
	if (start < str_len)
	{
		while (i < len && s[start] != '\0')
			sub_str[i++] = s[start++];
	}
	sub_str[i] = '\0';
	return (sub_str);
}
