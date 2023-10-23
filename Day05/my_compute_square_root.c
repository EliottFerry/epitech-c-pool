#include "day05.h"

int my_compute_square_root(int nb)
{
    int square = 0;

    for (; ((square + 1) * (square + 1)) <= nb; square++);

    return ((square * square) > nb ? 0 : square);
}