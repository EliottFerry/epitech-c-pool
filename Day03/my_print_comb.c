#include "day03.h"

void print(int hundred, int tenth, int units)
{
    my_putchar(hundred + '0');
    my_putchar(tenth + '0');
    my_putchar(units + '0');
    if (hundred != 7 || tenth != 8 || units != 9) {
        my_putchar(',');
        my_putchar(' ');
    }
}

void modify(int *hundred, int *tenth, int *units)
{
    for (; *hundred != 7 || *tenth != 8 || *units != 9; (*units)++) {
        if (*units > 9) {
            *units = 0;
            (*tenth)++;
        }
        if (*tenth > 8) {
            *tenth = 0;
            (*hundred)++;
        }
        if (*hundred < *tenth && *tenth < *units)
            print(*hundred, *tenth, *units);
    }
    print(*hundred, *tenth, *units);
}

int my_print_comb(void)
{
    int hundred = 0;
    int tenth = 1;
    int units = 2;

    modify(&hundred, &tenth, &units);
    return (0);
}