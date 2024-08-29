/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stnlstrip_if.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:51:35 by yuuko             #+#    #+#             */
/*   Updated: 2024/08/28 23:31:46 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string_int.h"
#include <stddef.h>

/**
 * @brief Strips the binary-safe string `s` from the left side of the characters
 * that satisfy the function `f`.
 *
 * @param s The string to be stripped.
 * @param f The function to check the characters.
 * @return The stripped string.
 */
t_string	ft_stnlstrip_if(t_string s, int (*f)(int))
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_stnlen(s);
	while (i < len && f(s[i]))
		i++;
	if (i != 0 && i != len)
		ft_memmove(s, s + i, len - i);
	s[len - i] = '\0';
	ft_stnsetlen(s, len - i);
	return (s);
}