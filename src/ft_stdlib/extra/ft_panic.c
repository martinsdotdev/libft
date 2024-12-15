/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_panic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 19:01:28 by martins           #+#    #+#             */
/*   Updated: 2024/12/15 14:38:50 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Prints an error message and exits the program.
 *
 * @param message The error message to be printed.
 */
void	ft_panic(const char *message)
{
	perror(message);
	exit(EXIT_FAILURE);
}
