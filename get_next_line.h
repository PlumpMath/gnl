/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lede-ser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/19 18:27:02 by lede-ser          #+#    #+#             */
/*   Updated: 2016/03/19 18:57:26 by lede-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		GET_NEXT_LINE_H
# define	GET_NEXT_LINE_H

# include <fcntl.h>
# include <libft.h>
# include <stdio.h>

# define BUFF_SIZE 250

typedef struct 		s_file
{
	int				fd;
	char			*content;
}					t_file;

int			get_next_line(int const fd, char **line);
t_file		*get_file(t_list **list, int fd);
t_file		*create_file(t_list **list, int fd);

#endif