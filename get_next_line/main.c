#include "get_next_line.h"

int main()
{
    int fd;
    fd = open("file.txt", O_RDONLY | O_APPEND);
    if (fd == -1)
        return (-1);
    char *s = get_next_line(fd);
    printf("%s", s);
    s = get_next_line(fd);
    printf("%s", s);
    // s = get_next_line(fd);
    // printf("%s", s);
    // s = get_next_line(fd);
    // printf("%s", s);
    // s = get_next_line(fd);
    // printf("%s", s);

    free(s);
}

// int main()
// {
//     t_list *head = NULL;
//     char *str;
//     creat_list(&head, strdup("hello"));
//     creat_list(&head, strdup(" brothr"));
//     creat_list(&head, strdup(" are"));
//     creat_list(&head, strdup(" you"));
//     creat_list(&head, strdup(" good"));
//     str = concating_str(&head);
//     printf("%s", str);
// }
  
// int main()
// {
//     char *str = NULL;
//     int *str;
//     free(str);
// }