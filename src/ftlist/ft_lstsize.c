/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedromar <pedromar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 21:34:54 by pedro             #+#    #+#             */
/*   Updated: 2022/04/23 19:18:12 by pedromar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		res;
	t_list	*aux;

	res = 0;
	aux = lst;
	while (aux != NULL)
	{
		aux = aux->next;
		res++;
	}
	return (res);
}
