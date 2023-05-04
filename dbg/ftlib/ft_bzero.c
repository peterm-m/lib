/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro <pedro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 12:39:01 by pedromar          #+#    #+#             */
/*   Updated: 2022/04/20 20:31:40 by pedro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dbg.h"

void	ft_bzero(void *s, size_t n)
{
	size_t		i;

	if (VERBOSE_IN)
		printf("ft_bzero\t%p\n,%d\n", n);
	i = 0;
	while (n--)
		((unsigned char *)s)[i++] = 0;
}

/*
** Overwrites the bytes of a string (*s) to zeroes bytes, depending on the
** value of the variable n. If the variable n is zero (0), then nothing
** will happen.
*/
