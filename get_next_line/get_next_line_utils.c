# include "get_next_line.h"

void creat_list(t_list **head, char *str, char c)
{
    t_list *new_node;
    t_list *ptr;
    char *new_str;

    if (!str || !head)
        return ;
    new_node = (t_list *)malloc(sizeof(t_list));
    if (!new_node)
        return ;
    if (c == 'c')
        new_str = copy_str(str, '$');
    else
        new_str = str;
    new_node->str = new_str;
    new_node->next = NULL;
    if (!*head)
    {
        *head = new_node;
        return ;
    }
    ptr = *head;
    while (ptr->next)
        ptr = ptr->next;
    ptr->next = new_node;
}

void free_list(t_list **head)
{
    t_list *ptr;

    ptr = *head;
    if (!head)
		return;
    while (*head)
    {
        ptr = (*head)->next;
        free((*head)->str);
        (*head)->str = NULL;
        free(*head);
        *head = ptr;
    }
    *head = NULL;
}

char *copy_str(char *str, char c)
{
    char *new_str;
    int i;

    i = 0;
    if (!str)
        return (NULL);
    if (c == 'c')
    {
        if (!str || *str == '\0')
            return (NULL);
        if (check_newline(str))
        {
            while (*str != '\n' && *str)
                str++;
            *str == '\n'? str++ : str;
        }
    }
    new_str = (char *)malloc(ft_strlen(str) + 1);
    if (!new_str)
         return (NULL);
    while(str[i])
    {
           new_str[i] = str[i];
           i++;
    }
    new_str[i] = '\0';
    return (new_str);
}

int check_newline(char *str)
{
    int i = 0;
    if (!str)
        return (0);
    while (str[i])
    {
        if (str[i] == '\n')
            return (1);
        i++;
    }
    return (0);
}

char *last(char *str)
{
    char *s1;
    int i;
    int j;

    i = 0;
    j = 0;
    if (!str)
        return (NULL);
    while (str[i] && str[i] != '\n')
        i++;
    s1 = (char *)malloc((sizeof(char) * i ) + 2);
    if (!s1)
        return (NULL);
    while (str[j] && j < i)
    {
        s1[j] = str[j];
        j++;
    }
    s1[j++] = '\n';
    s1[j] = '\0';
    return (s1);
}
