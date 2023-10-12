#include "day08.h"

int my_strlen(char const *str)
{
    int i = 0;
    for (; str[i]; i++);
    return (i);
}

void print_new_exercise(char const *str)
{
    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
    int fwidth = my_strlen(str) + (w.ws_col - my_strlen(str)) / 2;
    printf("%*s\n\n", fwidth, str);
}

int main(void)
{
    // Exercice 4
    print_new_exercise("STR TO WORD ARRAY");
    char **res = str_to_word_array("-Salut les amis-test---", " -,+/");
    for (int i = 0; res[i] != NULL; i++)
        printf("%s\n", res[i]);
    for (int i = 0; res[i] != NULL; i++)
        free(res[i]);
    free(res);
    return (0);
}
