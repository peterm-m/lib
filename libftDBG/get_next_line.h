/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedromar <pedromar@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:09:20 by pedromar          #+#    #+#             */
/*   Updated: 2022/11/05 17:25:01 by pedromar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# define STATIC_SIZE 8192
# define FD_MAX 1025

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_lstbuff
{
	struct s_lstbuff	*next;
	char				string[BUFFER_SIZE + 2];
}	t_lstbuff;

typedef struct s_queue
{
	t_lstbuff			*ini;
	t_lstbuff			*end;
	int					len;
}	t_queue;

char	*get_next_line(int fd);
void	ft_read_and_save(t_queue *file, int fd);
char	*ft_get_line(t_queue *file, char *save);
void	ft_save_file(t_queue *file, char *save);
void	ft_clean_file(t_queue *file);
int		ft_find_newline(char *save);
t_queue	*ft_creat_queue(void);
char	*ft_join_nodes(t_queue *file, int len, char *line);
#endif
