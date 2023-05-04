/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedromar <pedromar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 22:00:53 by pedro             #+#    #+#             */
/*   Updated: 2022/04/23 19:12:27 by pedromar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddf(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

void	ft_lstaddb(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (*lst == NULL)
	{
		*lst = new;
	}
	else
	{
		aux = *(lst);
		while (aux->next != NULL)
			aux = aux->next;
	aux->next = new;
	}
}
