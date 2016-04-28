/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lede-ser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/19 18:26:41 by lede-ser          #+#    #+#             */
/*   Updated: 2016/04/13 18:59:16 by lede-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

t_file	*get_file(t_list **list, int fd)
{
	t_list	*cur;
	t_file	*file;
	t_file	new_file;

	cur = *list;
	while (cur)
	{
		file = cur->content;
		if (file->fd == fd)
			return (file);
		cur = cur->next;
	}
	new_file.fd = fd;
	new_file.content = NULL;
	ft_lstadd(list, ft_lstnew(&new_file, sizeof(t_file)));
	return ((*list)->content);
}

void	remove_file(t_list **list, int fd)
{
	t_file	*file;
	t_list	*tmp;
	t_list	*prev;

	tmp = *list;
	if (tmp != NULL && (file = tmp->content) && file->fd == fd)
	{
		*list = tmp->next;
		free(tmp->content);
		free(tmp);
		return ;
	}
	while (tmp && (file = tmp->content) && file->fd == fd)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	if (tmp == NULL)
		return ;
	prev->next = tmp->next;
	free(tmp->content);
	free(tmp);
}

char	*ft_strcut(char **str, char c)
{
	char	*line;
	size_t	size;
	char	*tmp;
	char	*save;

	size = ft_strchr(*str, c) - *str;
	line = ft_strnew(size);
	ft_strncpy(line, *str, size);
	line[size] = '\0';
	save = *str;
	*str += size + 1;
	tmp = ft_strdup(*str);
	free(save);
	*str = tmp;
	return (line);
}

int		check_end_of_line(t_list **list, t_file *file, int fd, char **line)
{
	if ((!file->content) || file->content[0] == '\0')
	{
		remove_file(list, fd);
		return (0);
	}
	if (ft_strchr(file->content, '\n'))
	{
		*line = ft_strcut(&file->content, '\n');
		return (1);
	}
	*line = ft_strdup(file->content);
	file->content = NULL;
	return (1);
}

int		get_next_line(int const fd, char **line)
{
	t_file			*file;
	static t_list	*list;
	int				ret;
	char			buff[BUFF_SIZE + 1];

	if (fd < 0 || line == NULL || BUFF_SIZE <= 0)
		return (-1);
	file = get_file(&list, fd);
	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		if (!file->content)
			file->content = ft_strdup(buff);
		else
			file->content = ft_strfjoin(file->content, buff);
	}
	if (ret == -1)
		return (-1);
	return (check_end_of_line(&list, file, fd, line));
}
