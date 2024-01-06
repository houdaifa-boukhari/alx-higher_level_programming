#include "get_next_line.h"

int main()
{
    int fd;
    fd = open("file.txt", O_RDONLY | O_APPEND);
    if (fd == -1)
        return (-1);
    get_next_line(fd);
}