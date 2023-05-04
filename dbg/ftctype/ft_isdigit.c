/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro <pedro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 19:35:17 by pedromar          #+#    #+#             */
/*   Updated: 2023/05/04 21:15:54 by pedromar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dbg.h"

int	ft_isdigit(int c)
{
	if (VERBOSE_IN)
		printf("ft_isdigit\t%c\n", (char )c);
	return (c >= '0' && c <= '9');
}

/*
** Checks if the character is a digit (number).
*/
