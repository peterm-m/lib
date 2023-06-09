/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro <pedro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:15:58 by pedromar          #+#    #+#             */
/*   Updated: 2022/04/20 21:11:51 by pedro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dbg.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dst_len;

	if (VERBOSE_IN)
		printf("ft_strlcat\t%s,%s,%d\n", dst, src, dstsize);
	j = 0;
	dst_len = ft_strlen((char *)dst);
	src_len = ft_strlen((char *)src);
	i = dst_len;
	if (dstsize == 0)
		return (src_len);
	if (dstsize < dst_len)
		return (src_len + dstsize);
	else
	{
		while (src[j] && (dst_len + j) < dstsize)
			dst[i++] = src[j++];
		if ((dst_len + j) == dstsize && dst_len < dstsize)
			dst[--i] = '\0';
		else
			dst[i] = '\0';
		return (src_len + dst_len);
	}
}

/*
** Appends the NULL-terminated string src to the end of dst.
** It will append at most size - strlen(dst) - 1 bytes, NULL-terminating
** the result.
*/
