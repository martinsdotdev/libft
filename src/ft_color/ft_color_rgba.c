/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color_rgba.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 15:49:23 by martins           #+#    #+#             */
/*   Updated: 2024/12/15 15:58:53 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_color.h"
#include <stdint.h>

/**
 * @brief Creates a `t_color` from the RGBA components.
 *
 * @param r The red component.
 * @param g The green component.
 * @param b The blue component.
 * @param a The alpha component.
 * @return A color.
 */
t_color	ft_color_rgba(uint8_t r, uint8_t g, uint8_t b, uint8_t a)
{
	return ((t_color){
		.red = r,
		.green = g,
		.blue = b,
		.alpha = a,
	});
}
