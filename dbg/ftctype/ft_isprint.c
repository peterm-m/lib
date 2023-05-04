/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro <pedro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 19:40:12 by pedromar          #+#    #+#             */
/*   Updated: 2023/05/04 21:15:58 by pedromar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dbg.h"

int	ft_isprint(int c)
{
	if (VERBOSE_IN)
		printf("ft_isprint\t%c\n", (char )c);
	return (c >= ' ' && c <= '~');
}

/*
** Checks if the character can be printed (including space).
*/
