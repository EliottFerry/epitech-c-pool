#include "utils.h"

void print_new_exercise(char const *str)
{
    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
    int fwidth = my_strlen(str) + (w.ws_col - my_strlen(str)) / 2;
    printf("%*s\n\n", fwidth, str);
}