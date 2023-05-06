/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedromar <pedromar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 17:59:09 by pedro             #+#    #+#             */
/*   Updated: 2022/04/23 19:17:46 by pedromar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dbg.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*aux;

	if (VERBOSE_IN)
		printf("ft_lstclear \n");
	aux = *lst;
	while (aux != NULL)
	{
		*lst = aux->next;
		del(aux->content);
		free(aux);
		aux = *lst;
	}
}
