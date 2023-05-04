/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro <pedro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 21:44:10 by pedro             #+#    #+#             */
/*   Updated: 2022/04/20 21:52:15 by pedro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dbg.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;
	size_t	len_s;

	if (VERBOSE_IN)
		printf("ft_substr\t%s,%u,%d\n", s, start, len);
	i = 0;
	if (!s)
		return (NULL);
	len_s = ft_strlen((char *)s);
	if (len_s < start)
		return (ft_strdup(""));
	if (start + len > len_s)
		len = len_s - start;
	res = (char *)malloc(sizeof(char) * (len +1));
	if (!res)
		return (res);
	while (i < len && start + i < len_s)
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*
** Allocates with malloc(), and returns a “fresh” substring from the string
** given as argument. The substring begins at indexstart and is of size len.
** If start and len aren’t refering to a valid substring, the behavior is
** undefined. If the allocation fails, the function returns NULL.
*/