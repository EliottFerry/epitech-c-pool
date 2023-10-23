#include "day06.h"

static void my_char_swap(char *a, char *b)
{
    char c = *a;

    *a = *b;
    *b = c;
}

char *my_revstr(char *str)
{
    int len = my_strlen(str) - 1;

    for (int i = 0; i < len / 2; i++)
        my_char_swap((str + i), (str + (len - i - 1)));
    return (str);
}