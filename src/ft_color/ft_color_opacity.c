/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color_opacity.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 17:02:34 by martins           #+#    #+#             */
/*   Updated: 2024/12/15 17:02:36 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_color.h"
#include <math.h>

/**
 * @brief Returns a `t_color` with the same RGB components and a new opacity.
 *
 * @param c A color.
 * @param opacity The new opacity.
 * @return A color with the new opacity.
 */
t_color	ft_color_opacity(t_color c, float_t opacity)
{
	return ((t_color){
		.red = c.red,
		.green = c.green,
		.blue = c.blue,
		.alpha = c.alpha * opacity,
	});
}
