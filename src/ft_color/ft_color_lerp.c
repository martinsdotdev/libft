/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color_lerp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 15:49:13 by martins           #+#    #+#             */
/*   Updated: 2024/12/15 16:07:41 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_color.h"
#include <math.h>

/**
 * @brief Linearly interpolates between two colors.
 *
 * @param a The first color.
 * @param b The second color.
 * @param t The interpolation factor.
 * @return The interpolated color.
 */
t_color	ft_color_lerp(t_color a, t_color b, float_t t)
{
	return ((t_color){
		.red = a.red + (b.red - a.red) * t,
		.green = a.green + (b.green - a.green) * t,
		.blue = a.blue + (b.blue - a.blue) * t,
		.alpha = a.alpha + (b.alpha - a.alpha) * t,
	});
}
