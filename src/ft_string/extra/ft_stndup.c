/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stndup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 03:48:50 by yuuko             #+#    #+#             */
/*   Updated: 2024/05/28 21:56:08 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string_int.h"
#include <stdlib.h>

/**
 * @brief Duplicates the binary safe-string `s`.
 *
 * @param s The string to be duplicated.
 * @return The duplicated string. NULL if the allocation fails.
 */
t_string	ft_stndup(const t_string s)
{
	return (ft_stnnew_size(s, ft_stnlen(s)));
}
