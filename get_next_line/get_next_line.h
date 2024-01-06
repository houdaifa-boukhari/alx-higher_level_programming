#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 100
#endif

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
typedef struct s_list{
    char *str;
    struct s_list *next;
}   t_list;

void get_next_line(int fd);
void creat_list(t_list **head, char *str);
void free_list(t_list **head);
int check_newline(char *str);

#endif