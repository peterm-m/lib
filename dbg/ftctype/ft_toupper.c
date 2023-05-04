/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedromar <pedromar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 12:27:17 by pedromar          #+#    #+#             */
/*   Updated: 2023/05/04 21:16:02 by pedromar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dbg.h"

int	ft_toupper(int c)
{
	if (VERBOSE_IN)
		printf("ft_toupper\t%c\n", (char )c);
	if (c >= 'a' && c <= 'z')
		c = c - ' ';
	return (c);
}

/*
** Converts a lower-case letter to the corresponding upper-case letter.
*/
