/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coremart <coremart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 17:38:29 by coremart          #+#    #+#             */
/*   Updated: 2018/12/04 14:14:28 by coremart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# define BUFF_SIZE 5

typedef struct	s_fd
{
	char		*content;
	int			fd;
	struct s_fd	*next;
}				t_fd;

typedef struct	s_piece
{
	char	piece[4][4];
}				t_piece;

t_piece			*ft_check_error(char *file);
void			ft_print_error(int fd, int num);
int				get_next_line(const int fd, char **line);
void			ft_print_tab(t_piece *tab);

#endif