/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrnew_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 00:31:59 by martins           #+#    #+#             */
/*   Updated: 2024/11/16 01:46:10 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist_int.h"
#include "ft_stdlib.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * @brief Allocates (with malloc(3)) and returns a new array.
 *
 * @param size The size in bytes of the elements to be stored in the array.
 * @param capacity The initial capacity of the array.
 * @return The new array.
 */
t_array	*ft_arrnew_size(size_t size, size_t capacity)
{
	t_array	*arr;

	arr = malloc(sizeof(t_array));
	if (!arr)
		return (NULL);
	arr->elements = ft_calloc(capacity + 1, size);
	if (!arr->elements)
		return (free(arr), NULL);
	arr->element_size = size;
	arr->size = 0;
	arr->capacity = capacity;
	return (arr);
}
