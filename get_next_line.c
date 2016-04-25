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

/*void 	ft_free_all(void *content, size_t size)
{
	t_file *file;

	(void)size;
	file = content;
	if (file->content)
		free(file->content);
	free(file);
}*/

t_file	*create_file(t_list **list, int fd)
{
	t_file	file;
	t_list	*new;

	file.fd = fd;
	file.content = ft_strnew(1);
	new = ft_lstnew(&file, sizeof(t_file));
	ft_lstadd(list, new);
	return (new->content);
}

t_file	*get_file(t_list **list, int fd)
{
	t_list	*cur;
	t_file	*file;

	cur = *list;
	while (cur)
	{
		file = cur->content;
		if (file->fd == fd)
			return (file);
		else
			cur = cur->next;
	}
	return (create_file(list, fd));
}

char	*ft_strcut(char **str)
{
	char    *line;
	size_t	size;

	size = ft_strchr(*str, '\n') - *str;
	line = ft_strnew(size);
	ft_strncpy(line, *str, size);
	line[size] = '\0';
	*str = ft_strchr(*str, '\n') + 1;
	return (line);
}

int		get_next_line(int const fd, char **line)
{
	t_file			*file;
	static t_list	*list;
	int				ret;
	char			buff[BUFF_SIZE + 1];

	if (fd < 0 || line == NULL)
		return (-1);
	file = get_file(&list, fd);
	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		if (!file->content[0])
			file->content = ft_strdup(buff);
		else
			file->content = ft_strjoin(file->content, buff);
	}
	/*free(buff);
	buff = NULL;*/
	if (ret == -1)
		return (-1);
	if (file->content == NULL)
		return (0);
	if (ft_strchr(file->content, '\n'))
	{
		*line = ft_strcut(&file->content);
		return (1);
	}
	/*else if (ret == 0 && ft_strchr(file->content, '\n') == NULL)*/
	*line = ft_strdup(file->content);
	file->content = NULL;
	return (1);
}