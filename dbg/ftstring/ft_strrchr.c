/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedromar <pedromar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 21:23:08 by pedro             #+#    #+#             */
/*   Updated: 2022/04/23 16:12:43 by pedromar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dbg.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	j;

	if (VERBOSE_IN)
		printf("ft_strrchr\t%s,%d\n", str, c);
	i = 0;
	j = 0;
	while (str[i] != '\0')
		i++;
	while (i >= j)
		if (str[i - j++] == (unsigned char) c)
			return ((char *)&str[i - j +1]);
	return (NULL);
}

/*
** Locates the last occurrence of c (converted to a char) in the string
** pointed to by s.  The terminating null character is considered to be part
** of the string; therefore if c is `\0', the functions locate the
** terminating `\0'.
*/
