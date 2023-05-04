/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro <pedro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 19:35:17 by pedromar          #+#    #+#             */
/*   Updated: 2022/04/04 22:14:34 by pedro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (VERBOSE_IN)
		printf("ft_isdigit\t%c\n", (char )c);
	return (c >= '0' && c <= '9');
}

/*
** Checks if the character is a digit (number).
*/
