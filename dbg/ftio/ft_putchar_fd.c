/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedromar <pedromar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 20:54:10 by pedro             #+#    #+#             */
/*   Updated: 2022/04/23 13:53:36 by pedromar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dbg.h"

void	ft_putchar_fd(char c, int fildes)
{
	if (VERBOSE_IN)
		printf("ft_putcahr_fd\t%c,%d\n", c, fildes);
	write(fildes, &c, 1);
}

/*
** Outputs the char c to the file descriptor filedes.
*/
