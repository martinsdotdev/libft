/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color_random.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 16:16:34 by martins           #+#    #+#             */
/*   Updated: 2024/12/15 16:20:33 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_color.h"
#include <stdlib.h>

/**
 * @brief Generates a random color.
 *
 * @return A random color.
 */
t_color	ft_color_random(void)
{
	return ((t_color){
		.red = rand() % 256,
		.green = rand() % 256,
		.blue = rand() % 256,
		.alpha = UINT8_MAX,
	});
}
