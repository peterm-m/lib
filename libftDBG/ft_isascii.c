/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro <pedro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 19:37:33 by pedromar          #+#    #+#             */
/*   Updated: 2022/04/04 22:12:28 by pedro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{	
	if (VERBOSE_IN)
		printf("ft_isascii\t%c\n", (char )c);
	return (c >= 0 && c <= 127);
}

/*
** Checks if the character is from the ASCII table.
*/
