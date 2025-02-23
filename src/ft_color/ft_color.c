/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 15:49:26 by martins           #+#    #+#             */
/*   Updated: 2024/12/15 15:58:12 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_color.h"
#include <stdint.h>

/**
 * @brief Creates a `t_color` from a 32-bit integer.
 *
 * @param v A 32-bit integer.
 * @return A color.
 */
t_color	ft_color(uint32_t v)
{
	return ((t_color){.value = v});
}
