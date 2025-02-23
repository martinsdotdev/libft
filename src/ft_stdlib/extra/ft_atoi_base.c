/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 19:01:28 by yuuko             #+#    #+#             */
/*   Updated: 2024/03/24 01:00:59 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"
#include "ft_string.h"
#include <stdlib.h>

/**
 * @brief Converts the initial portion of the string pointed to by `str` to int
 * representation in the specified base.
 *
 * @param str The string to be converted.
 * @param base A string representing the base to convert to.
 * @return The converted value or 0 on error.
 */
int	ft_atoi_base(const char *nptr, const char *base)
{
	int		res;
	char	sign;
	size_t	i;
	size_t	base_size;

	i = 0;
	while (ft_isspace(nptr[i]))
		i++;
	sign = 1;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -sign;
		i++;
	}
	res = 0;
	base_size = ft_strlen(base);
	while (nptr[i] != '\0' && ft_strchr(base, nptr[i]))
	{
		res = res * base_size + (ft_strchr(base, nptr[i]) - base);
		i++;
	}
	return (res * sign);
}
