#include "get_next_line.h"

char *get_next_line(int fd)
{
    static t_list *node;
    char *buffer;
    int byt_read;

    node = NULL;
    if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, &buffer, 0) < 0)
        return (NULL);
    buffer = (char *)malloc(BUFFER_SIZE + 1);
    if (!buffer)
        return (NULL);
    while ((byt_read = read(fd, buffer, BUFFER_SIZE)) > 0)
    {
        if (!check_newline(buffer))
        {
            buffer[byt_read] = '\0';
            creat_list(&node, buffer);
        }
        else
        {
            buffer[byt_read] = '\0';
            creat_list(&node, last(buffer));
            break;
        }
    }
    free (buffer);
    return (concating_str(&node));
}

char *concating_str(t_list **head)
{
    char *str;
    t_list *ptr = *head;
    if (!head)
        return (NULL);
    str = ptr->str;
    ptr = ptr->next;
    while (ptr)
    {
        str = ft_strjoin(str, ptr->str);
        ptr = ptr->next;   
    }
    free_list(head);
    return (str);
}

size_t ft_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	len;
	int		i;
	int		j;

	len = 0;
	i = 0;
	new_str = NULL;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	new_str = (char *)malloc((sizeof(char) * len) + 1);
	if (!new_str)
		return (NULL);
	while (s1[i])
	{
		new_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
		new_str[i++] = s2[j++];
	new_str[i] = '\0';
	return (new_str);
}
