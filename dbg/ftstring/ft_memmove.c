/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro <pedro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 12:50:48 by pedromar          #+#    #+#             */
/*   Updated: 2022/04/20 20:55:08 by pedro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dbg.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int			i;

	if (VERBOSE_IN)
		printf("ft_memmove\t%p,%p,%d\n", dest, src, n);
	i = 0;
	if (((unsigned char *)dest) == NULL && ((unsigned char *)src) == NULL)
		return (NULL);
	if (((unsigned char *)src) < ((unsigned char *)dest))
		while (n-- > 0)
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	else
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (((unsigned char *)dest));
}

/*
** Copies n bytes from string src to string dest.
** The two strings may overlap; the copy is always done in a non-destructive
** manner.
*/
