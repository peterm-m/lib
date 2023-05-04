/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedromar <pedromar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 19:27:32 by pedro             #+#    #+#             */
/*   Updated: 2022/04/23 19:01:47 by pedromar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dbg.h"

static size_t	ft_lennb(int nb, char *str)
{
	size_t	len;

	if (nb == -2147483648)
		str = ft_strdup("-2147483648");
	else
	{
		len = 0;
		if (nb == 0)
			return (1);
		if (nb < 0)
			len += 1;
		while (nb)
		{
			nb /= 10;
			len += 1;
		}
		str = (char *)malloc(sizeof(char) * (len + 1));
	}
	return (len);
}

char	*ft_itoa(int nb)
{
	size_t	i;
	size_t	n_size;
	char	*str;

	if (VERBOSE_IN)
		printf("ft_itoa\t%d\n", nb);
	i = 0;
	n_size = ft_lennb(nb, str);
	if (nb == -2147483648 || str == NULL)
		return (str);
	str[n_size] = 0;
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
		i += 1;
	}
	while (i < n_size--)
	{
		str[n_size] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}

/*
** Takes an int, and converts it to a null-terminated string.
*/
