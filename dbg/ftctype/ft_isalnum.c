/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro <pedro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 19:31:47 by pedromar          #+#    #+#             */
/*   Updated: 2023/05/04 21:15:40 by pedromar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dbg.h"

int	ft_isalnum(int c)
{
	if (VERBOSE_IN)
		printf("ft_isalnum\t%c\n", (char)c);
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/*
** Checks if the character is alphanumeric.
*/
