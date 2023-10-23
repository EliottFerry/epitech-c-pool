#include "day05.h"

int my_compute_power_it(int nb, int p)
{
    int res = 1;

    for (; p>0; p--)
        res *= nb;
    
    return (res);
}