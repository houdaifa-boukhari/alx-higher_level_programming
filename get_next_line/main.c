// #include "get_next_line.h"

// int main()
// {
//     int fd;
//     int i = 0;
//     fd = open("file.txt", O_RDONLY | O_APPEND);
//     if (fd == -1)
//         return (-1);
//     char *s = NULL;
//     while (i <= 13)
//     {
//         s = get_next_line(fd);
//         printf(" %d : %s ", i , s);
//         free(s);
//         i++;
//     }
//     printf("\n");
// }

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
  