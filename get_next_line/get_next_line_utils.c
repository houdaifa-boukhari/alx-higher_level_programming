# include "get_next_line.h"

void creat_list(t_list **head, char *str)
{
    t_list *new_node;
    t_list *ptr;

    if (!str || !head)
        return ;
    new_node = (t_list *)malloc(sizeof(t_list));
    if (!new_node)
        return ;
    new_node->str = str;
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
}

int check_newline(char *str)
{
    if (!str)
        return (0);
    while (*str)
    {
        if (*str == '\n')
            return (1);
        str++;
    }
    return (0);
}
