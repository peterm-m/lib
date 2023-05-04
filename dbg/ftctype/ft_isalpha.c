/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro <pedro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 19:22:07 by pedromar          #+#    #+#             */
/*   Updated: 2023/05/04 21:15:45 by pedromar         ###   ########.fr       */
/*                                                                            */
	/* ************************************************************************** */

#include "dbg.h"

int	ft_isalpha(int c)
{
	if (VERBOSE_IN)
		printf("ft_isalpha\t%c\n", (char )c);
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/*
** Checks if the character is a letter.
*/
