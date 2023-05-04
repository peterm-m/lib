/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro <pedro@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 20:58:04 by pedro             #+#    #+#             */
/*   Updated: 2022/04/20 20:33:08 by pedro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dbg.h"

void	ft_putstr_fd(char *str, int filedes)
{
	int	i;

	if (VERBOSE_IN)
		printf("ft_putstr_fd\t%s,%d\n", str, filedes);
	i = 0;
	if (str == NULL)
		return ;
	while (str[i] != '\0')
	{
		write(filedes, &str[i], 1);
		i++;
	}
}

/*
** Outputs the string str to the file descriptor filedes.
*/