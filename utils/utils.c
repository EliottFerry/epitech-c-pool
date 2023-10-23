#include "utils.h"

void print_new_exercise(char const *str)
{
    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
    int fwidth = strlen(str) + (w.ws_col - strlen(str)) / 2;
    printf("%*s\n\n", fwidth, str);
}