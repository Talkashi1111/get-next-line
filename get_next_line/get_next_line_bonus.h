/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkashi <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:52:18 by tkashi            #+#    #+#             */
/*   Updated: 2023/11/22 11:52:26 by tkashi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <stddef.h>
# include <fcntl.h>
# include <sys/types.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 56
# endif 
# define FALSE 0
# define TRUE 1

typedef struct s_node
{
	char			*buf;
	struct s_node	*next;
}				t_lst_node;

typedef struct s_list
{
	t_lst_node	*head;
	t_lst_node	*tail;
	ssize_t		len;
}			t_list;

void		polish(t_list **list);
char		*get_next_line(int fd);
char		*copy_new_line(t_list *list);
ssize_t		find_new_line(t_list *list);
int			append_to_list(t_list *list, ssize_t bytes_read, char *buf);
int			prepare_next_line(int fd, t_list *list);
char		*free_list(t_list **list, int free_all);
t_list		*init_list(t_list **list);
t_lst_node	*create_node(char **buf);
void		free_helper(t_list **list);
#endif
