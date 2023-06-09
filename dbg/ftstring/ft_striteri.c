/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedromar <pedromar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:22:30 by pedromar          #+#    #+#             */
/*   Updated: 2022/04/23 16:45:09 by pedromar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dbg.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (VERBOSE_IN)
		printf("ft_striteri\t%s,%p\n", s, f);
	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
