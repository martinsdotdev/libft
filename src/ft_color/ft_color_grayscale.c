/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color_grayscale.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 15:49:10 by martins           #+#    #+#             */
/*   Updated: 2024/12/15 16:15:00 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_color.h"
#include <math.h>

/**
 * @brief Converts a color to grayscale.
 *
 * @param c A color.
 * @return The grayscale color.
 */
t_color	ft_color_grayscale(t_color c)
{
	float_t	gray;

	gray = (c.red * 0.299f) + (c.green * 0.587f) + (c.blue * 0.114f);
	return ((t_color){
		.red = gray,
		.green = gray,
		.blue = gray,
		.alpha = c.alpha,
	});
}
