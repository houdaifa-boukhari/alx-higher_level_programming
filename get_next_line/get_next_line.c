/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:08:27 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/01/10 22:41:41 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_and_process(int fd, char **temp, char *buffer, t_list **node)
{
	t_va	value;

	if (*temp && check_newline(*temp))
	{
		value.line = last(*temp);
		value.str = copy_str(*temp, 'c');
		free(*temp);
		*temp = value.str;
		return (value.line);
	}
	creat_list(node, *temp, '$');
	*temp = NULL;
	while ((value.byt_read = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[value.byt_read] = '\0';
		if (check_newline(buffer))
		{
			creat_list(node, last(buffer), '$');
			*temp = copy_str(buffer, 'c');
			return (concating_str(node));
		}
		creat_list(node, buffer, 'c');
	}
	return (concating_str(node));
}

char	*get_next_line(int fd)
{
	static char	*temp;
	t_list		*node;
	char		*line;
	char		*buffer;

	node = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, &buffer, 0) < 0)
	{
		free(temp);
		temp = NULL;
		return (NULL);
	}
	buffer = (char *)malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	line = read_and_process(fd, &temp, buffer, &node);
	free(buffer);
	return (line);
}

char	*concating_str(t_list **head)
{
	char	*str;
	t_list	*ptr;

	ptr = *head;
	if (!head || !*head)
		return (NULL);
	str = copy_str(ptr->str, '$');
	if (!str)
		return (free_list(head));
	ptr = ptr->next;
	while (ptr)
	{
		str = ft_strjoin(str, ptr->str);
		ptr = ptr->next;
	}
	free_list(head);
	return (str);
}

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char		*new_str;
	size_t		i;
	size_t		j;

	i = 0;
	new_str = NULL;
	if (!s1 || !s2)
		return (NULL);
	new_str = malloc((sizeof(char) * ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!new_str)
		return (free(s1), NULL);
	while (s1[i])
	{
		new_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
		new_str[i++] = s2[j++];
	new_str[i] = '\0';
	free(s1);
	s1 = NULL;
	return (new_str);
}
