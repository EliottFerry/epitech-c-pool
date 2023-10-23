#include "day04.h"

int my_strlen(char const *str)
{
    int i = 0;

    for (; str[i]; i++);
    return (i);
}