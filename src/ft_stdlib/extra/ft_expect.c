/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_expect.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 19:01:28 by martins           #+#    #+#             */
/*   Updated: 2024/12/15 14:47:23 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

/**
 * @brief Exits the program if the pointer is `NULL`.
 *
 * @param ptr The pointer to be checked.
 * @param message The error message to be printed.
 * @return The pointer if it is not `NULL`.
 */
void	*ft_expect(void *ptr, const char *message)
{
	if (!ptr)
		ft_panic(message);
	return (ptr);
}
