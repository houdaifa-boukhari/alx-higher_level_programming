# include "get_next_line.h"

void creat_list(t_list **head, char *str)
{
    t_list *new_node;
    t_list *ptr;
    char *new_str;

    if (!str || !head)
        return ;
    new_node = (t_list *)malloc(sizeof(t_list));
    if (!new_node)
        return ;
    new_str = copy_str(str);
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
    while (*head)
    {
        ptr = (*head)->next;
        free((*head)->str);
        free(*head);
        *head = ptr;
    }
    *head = NULL;
}

char *copy_str(char *str)
{
    char *new_str;
    int i;

    i = 0;
    if (!str)
        return (NULL);
    new_str = (char *)malloc(BUFFER_SIZE + 1);
    if (!new_str)
         return (NULL);
    while(str[i] && i <= BUFFER_SIZE)
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
