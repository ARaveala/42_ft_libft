/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:57:29 by araveala          #+#    #+#             */
/*   Updated: 2023/11/22 11:21:53 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	int	ft_max_error(long int num, int save, const char *str)
{
	long int	max;
	int			result;

	result = 0;
	max = 9223372036854775807;
	if (num > max / 10 - (*str - 48))
	{
		if (save == -1)
			return (result);
		result = -1;
	}
	return (result);
}

int	ft_atoi(const char *str)
{
	int			save;
	long int	set_num;

	save = 1;
	set_num = 0;
	while (*str != '\0')
	{
		while ((*str > 8 && *str < 14) || *str == 32)
			str++;
		if (*str == '+' || *str == '-')
		{
			if (*str == '-')
				save = -1;
			str++;
		}
		while (ft_isdigit(*str) == 1)
		{
			ft_max_error(set_num, save, str);
			set_num = set_num * 10 + *str - 48;
			str++;
		}
		return (set_num * save);
	}
	return (0);
}
