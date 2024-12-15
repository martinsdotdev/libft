/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color_parse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 15:49:18 by martins           #+#    #+#             */
/*   Updated: 2024/12/15 18:22:29 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_color.h"
#include "ft_stdio.h"
#include <stdbool.h>
#include <unistd.h>

/**
 * @brief TODO: Parses a color from a string.
 *
 * @param str The string to parse.
 * @return A `t_color_result` structure with the parsed color and an error flag.
 */
t_color_result	ft_color_parse(const char *str __attribute__((unused)))
{
	ft_putstr_fd((char *)__func__, STDERR_FILENO);
	ft_putendl_fd(" is not implemented yet", STDERR_FILENO);
	return ((t_color_result){
		.color.value = 0,
		.error = true,
	});
}
