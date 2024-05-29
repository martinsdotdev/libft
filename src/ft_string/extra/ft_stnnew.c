/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stnnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 02:47:46 by yuuko             #+#    #+#             */
/*   Updated: 2024/05/28 22:01:41 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string_int.h"
#include <stdlib.h>

/**
 * @brief Allocates (with malloc(3)) and returns a new binary-safe string.
 *
 * @param s The content to create the string with.
 * @return The new string.
 */
t_string	ft_stnnew(const char *s)
{
	return (ft_stnnew_size(s, ft_strlen(s)));
}
