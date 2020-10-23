/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho <fcoelho@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 00:52:16 by fcoelho           #+#    #+#             */
/*   Updated: 2020/02/19 09:09:02 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*putlil(char const *str, unsigned int len)
{
	unsigned int	i;
	char			*line;

	i = 0;
	line = ft_calloc(1, len);
	if (str)
	{
		while (i < len)
		{
			line[i] = str[i];
			i++;
		}
	}
	line[i - 1] = '\0';
	return (line);
}

static int		mgk(char **str, char **line)
{
	unsigned int	len;
	char			*temp;

	len = 0;
	while ((*str)[len] != '\n' && (*str)[len])
		len++;
	if ((*str)[len] == '\n')
	{
		*line = putlil(&(*str)[0], len + 1);
		temp = ft_strdup(&((*str)[len + 1]));
		free(*str);
		*str = temp;
	}
	else
	{
		*line = ft_strdup(*str);
		if (*str != NULL)
		{
			free(*str);
			*str = NULL;
		}
		return (0);
	}
	return (1);
}

static int		raux(char **str, char **line, int retaux, int fd)
{
	if (retaux < 0)
		return (-1);
	else if (retaux == 0 && str[fd] == NULL)
	{
		*line = ft_strdup("");
		return (0);
	}
	else
		return (mgk(&str[fd], line));
}

int				get_next_line(int fd, char **line)
{
	int			retaux;
	char		buffer[BUFFER_SIZE + 1];
	static char *str[4096];
	char		*temp;

	if (fd < 0)
		return (-1);
	while ((retaux = (int)read(fd, &buffer, BUFFER_SIZE)) > 0)
	{
		buffer[retaux] = '\0';
		if (str[fd] == NULL)
			str[fd] = ft_strdup(buffer);
		else
		{
			temp = ft_strjoin(str[fd], buffer);
			free(str[fd]);
			str[fd] = temp;
		}
		if (ft_strchr(str[fd], '\n'))
			break ;
	}
	return (raux(str, line, retaux, fd));
}
