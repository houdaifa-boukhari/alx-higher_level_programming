#include "get_next_line.h"

char *get_next_line(int fd)
{
    
    t_list *node;
    int byt_read;
    static char* temp;
    char *buffer;

    node = NULL;
    if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, &buffer, 0) < 0)
        return (NULL);
    buffer = (char *)malloc(BUFFER_SIZE + 1);
    if (!buffer)
        return (NULL);
    if (temp)
    {
        creat_list(&node, temp, '$');
        free(temp);
        temp = NULL;
    }
    while ((byt_read = read(fd, buffer, BUFFER_SIZE)) > 0)
    {
        buffer[byt_read] = '\0';
        if (!check_newline(buffer))
                creat_list(&node, buffer, 'c');
        else
        {
            creat_list(&node, last(buffer), '$');
            break;
        }
    }
    temp = copy_str(buffer, 'c');
    free(buffer);
    return (concating_str(&node));
}

char *concating_str(t_list **head)
{
    char *str;
    t_list *ptr = *head;
    if (!head || !*head)
        return (NULL);
    str = copy_str(ptr->str, '$');
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
    size_t i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new_str;
	size_t	len;
	size_t		i;
	size_t		j;

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
    free(s1);
	return (new_str);
}
