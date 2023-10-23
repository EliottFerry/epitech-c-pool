#include "day05.h"

int my_compute_factorial_it(int nb)
{
    int res = 1;

    if (nb >= 15)
        return (0);
    for (; nb > 0; nb--)
        res *= nb;
    return (res);
}