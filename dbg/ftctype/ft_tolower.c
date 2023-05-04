/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedromar <pedromar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 12:27:54 by pedromar          #+#    #+#             */
/*   Updated: 2023/05/04 21:16:00 by pedromar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dbg.h"

int	ft_tolower(int c)
{
	if (VERBOSE_IN)
		printf("ft_tolower\t%c\n", (char )c);
	if (c >= 'A' && c <= 'Z')
		c = c + ' ';
	return (c);
}

/*
** Converts an upper-case letter to the corresponding lower-case letter.
*/
