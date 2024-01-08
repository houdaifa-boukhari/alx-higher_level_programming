#include "get_next_line.h"

int main()
{
    int fd;
    fd = open("file.txt", O_RDONLY | O_APPEND);
    if (fd == -1)
        return (-1);
    char *s = get_next_line(fd);
    printf("1: %s", s);
    s = get_next_line(fd);
    printf("2: %s", s);
    s = get_next_line(fd);
    printf("3: %s", s);
    s = get_next_line(fd);
    printf("4: %s", s);
    s = get_next_line(fd);
    printf("5: %s", s);
    s = get_next_line(fd);
    printf("6: %s", s);
    s = get_next_line(fd);
    printf("--7: %s", s);

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