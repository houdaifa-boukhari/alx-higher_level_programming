/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:10:12 by hel-bouk          #+#    #+#             */
/*   Updated: 2024/01/10 17:12:58 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <fcntl.h>

typedef struct s_list{
	char			*str;
	struct s_list	*next;
}	t_list;

typedef struct value{
	char	*str;
	char	*line;
	int		byt_read;
}	t_va;

char	*read_and_process(int fd, char **temp, char *buffer, t_list **node);
char	*get_next_line(int fd);
char	*copy_str(char *str, char c);
void	*creat_list(t_list **head, char *str, char c);
void	*free_list(t_list **head);
int		check_newline(char *str);
char	*last(char *str);
char	*concating_str(t_list **head);
size_t	ft_strlen(char *str);
char	*ft_strjoin(char *s1, char *s2);

#endif
