/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro <pedro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 18:38:18 by pedromar          #+#    #+#             */
/*   Updated: 2022/04/20 20:33:51 by pedro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dbg.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (VERBOSE_IN)
		printf("ft_str\t%s,%d\n", s, c);
	i = 0;
	while (s[i] != (char)c)
	{
		if (!s[i++])
			return (NULL);
	}
	return ((char *)&s[i]);
}

/*
** Locates the first occurrence of c (converted to a char) in the string
** pointed to by s.  The terminating null character is considered to be part
** of the string; therefore if c is `\0', the functions locate the
** terminating `\0'.
*/
