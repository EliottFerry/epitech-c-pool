#include "day04.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    while (*str) {
        my_putchar(*str);
        str++;
    }
    return (0);
}