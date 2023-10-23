#include "day03.h"

void my_put_nbr(int nb)
{
    int base_diviser = 1000000000;
    for (; nb > 9; nb %= base_diviser, base_diviser /= 10) {
        if ((nb / base_diviser) == 0)
            continue;
        my_putchar((nb / base_diviser) + '0');
    }
    my_putchar(nb + '0');
}