#include "day04.h"

static void my_char_swap(char *a, char *b)
{
    char c = *a;

    *a = *b;
    *b = c;
}

char *my_evil_str(char *str)
{
    int len = my_strlen(str);

    for (int i = 0; i < len / 2 + 1; i++)
        my_char_swap((str + i), (str + (len - i - 1)));
    return (str);
}