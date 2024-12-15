/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color_rgb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 15:49:21 by martins           #+#    #+#             */
/*   Updated: 2024/12/15 15:58:20 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_color.h"
#include <stdint.h>

/**
 * @brief Creates a `t_color` from the RGB components.
 *
 * @param r The red component.
 * @param g The green component.
 * @param b The blue component.
 * @return A color.
 */
t_color	ft_color_rgb(uint8_t r, uint8_t g, uint8_t b)
{
	return ((t_color){
		.red = r,
		.green = g,
		.blue = b,
		.alpha = UINT8_MAX,
	});
}
