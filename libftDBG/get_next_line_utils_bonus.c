/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedromar <pedromar@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:09:20 by pedromar          #+#    #+#             */
/*   Updated: 2022/11/05 17:25:01 by pedromar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line_bonus.h"

t_queue	*ft_creat_queue(void)
{
	t_queue	*file;

	file = (t_queue *) malloc(sizeof(t_queue));
	if (!file)
		return ((t_queue *) NULL);
	file->ini = (t_lstbuff *) NULL;
	file->end = (t_lstbuff *) NULL;
	file->len = 0;
	return (file);
}

int	ft_find_newline(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0' )
	{
		if (str[i++] == '\n')
			return (i);
	}
	return (0);
}

void	ft_clean_file(t_queue *file)
{
	t_lstbuff	*aux1;
	t_lstbuff	*aux2;

	aux1 = file->ini;
	while (aux1)
	{
		aux2 = aux1->next;
		free(aux1);
		aux1 = aux2;
	}
	free(aux1);
	free(file);
}
