/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:22:32 by araveala          #+#    #+#             */
/*   Updated: 2023/11/22 11:37:46 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*storage_ptr;

	storage_ptr = malloc(count * size);
	if (storage_ptr == NULL)
		return (NULL);
	ft_bzero(storage_ptr, count * size);
	return (storage_ptr);
}
