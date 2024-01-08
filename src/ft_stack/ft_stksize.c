/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stksize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 02:27:09 by yuuko             #+#    #+#             */
/*   Updated: 2024/04/17 03:37:53 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"
#include <stdlib.h>

/**
 * @brief Returns the number of elements in the stack.
 *
 * @param stk A pointer to the stack to be checked.
 * @return The size of the stack.
 */
size_t	ft_stksize(const t_stack *stk)
{
	return (stk->size);
}
