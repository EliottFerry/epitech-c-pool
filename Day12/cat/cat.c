#include "../day12.h"

void print_error(char *file_name)
{
    write(2, file_name, my_strlen(file_name));
    write(2, ": No such file or directory\n", 28);
}

void clear_buffer(char *buffer)
{
    for (int i = 0; buffer[i]; i++)
        buffer[i] = '\0';
}

int read_file(int fd)
{
    char buffer[4096];
    int buf_len = 0;
    while ((buf_len = read(fd, buffer, 4096)) != 0) {
        write(1, buffer, buf_len);
        clear_buffer(buffer);
    }
    return (0);
}

int my_cat(char **file_name_list)
{
    int fd = 0;
    if (file_name_list[0] == NULL) {
        read_file(fd);
        return (0);
    }
    for (int i = 0; file_name_list[i]; i++) {
        fd = open(file_name_list[i], O_RDONLY);
        if (fd == - 1 || read_file(fd) == 84) {
            print_error(file_name_list[i]);
            return (84);
        }
        close(fd);
    }
    return (0);
}