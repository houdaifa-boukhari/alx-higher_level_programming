#include "get_next_line.h"

void get_next_line(int fd)
{
    static t_list *node;
    char *buffer;
    int byt_buffer;
    t_list *ptr;

    node = NULL;
    if (fd < 0 || BUFFER_SIZE <= 0)
        return ;
    buffer = (char *)malloc(BUFFER_SIZE);
    while (read(fd, buffer, BUFFER_SIZE) > 0)
   {
        creat_list(&node, buffer);
   }
    ptr = node;
    while (ptr)
    {
        printf("%s\n", node->str);
        ptr = ptr->next;
    }
}