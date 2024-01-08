#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 1
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

char *get_next_line(int fd);
char *copy_str(char *str, char c);
void creat_list(t_list **head, char *str);
void free_list(t_list **head);
int check_newline(char *str);
char *last(char *str);
char *concating_str(t_list **head);
size_t ft_strlen(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);

#endif