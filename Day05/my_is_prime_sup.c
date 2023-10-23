#include "day05.h"

int my_find_prime_sup(int nb)
{
    while (!my_is_prime(nb))
        nb += 1;
    return (nb);
}