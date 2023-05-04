/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedromar <pedromar@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:09:20 by pedromar          #+#    #+#             */
/*   Updated: 2022/10/08 18:49:27 by pedromar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	save[FD_MAX][STATIC_SIZE + 1];
	t_queue		*file;
	char		*dest;

	if (BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		if (fd >= 0 && fd < FD_MAX)
			save[fd][0] = '\0';
		return (NULL);
	}
	file = ft_creat_queue();
	if (ft_find_newline(save[fd]) == 0)
		ft_read_and_save(file, fd);
	dest = ft_get_line(file, save[fd]);
	ft_save_file(file, save[fd]);
	ft_clean_file(file);
	if (dest[0] == '\0' && save[fd][0] == '\0')
	{
		free(dest);
		return (NULL);
	}
	return (dest);
}

void	ft_read_and_save(t_queue *file, int fd)
{
	t_lstbuff	*node;
	int			len_read;

	len_read = 1;
	while (len_read != 0)
	{
		node = (t_lstbuff *) malloc(sizeof(t_lstbuff));
		if (!node)
			break ;
		node->next = NULL;
		len_read = read(fd, node->string, BUFFER_SIZE);
		node->string[len_read] = '\0';
		if (file->ini == NULL)
			file->ini = node;
		else
			file->end->next = node;
		file->end = node;
		file->len++;
		if (ft_find_newline(node->string) != 0)
			break ;
	}
}

char	*ft_get_line(t_queue *file, char *save)
{
	char		*line;
	int			i;
	int			j;

	i = 0;
	j = 0;
	line = (char *) malloc((file->len + 1) * BUFFER_SIZE);
	if (!line)
		return (line);
	if (save)
	{
		while (save[i] != '\0')
		{
			line[j++] = save[i];
			if (save[i++] == '\n')
				break ;
		}
	}
	return (ft_join_nodes(file, j, line));
}

char	*ft_join_nodes(t_queue	*file, int len, char *line)
{
	t_lstbuff	*aux;
	int			i;
	int			j;

	i = 0;
	j = len;
	aux = file->ini;
	while (aux)
	{
		while (aux->string[i] != '\0')
		{
			line[j++] = aux->string[i];
			if (aux->string[i++] == '\n')
				break ;
		}
		i = 0;
		aux = aux->next;
	}
	line[j] = '\0';
	return (line);
}

void	ft_save_file(t_queue *file, char *save)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (file->end)
	{
		while (file->end->string[i] != '\0')
			if (file->end->string[i++] == '\n')
				break ;
		while (file->end->string[i] != '\0')
			save[j++] = file->end->string[i++];
	}
	else
	{
		while (save[i] != '\0')
			if (save[i++] == '\n')
				break ;
		while (save[i] != '\0')
			save[j++] = save[i++];
	}
	save[j] = '\0';
}
