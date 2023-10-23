#include "day03.h"

int my_print_revalpha(void)
{
    for (char i = 'z'; i >= 'a'; i--)
        my_putchar(i);
    my_putchar('\n');
    return (0);
}