#include "day05.h"

int main(void)
{
    int nb_queens = 5;

    print_new_exercise("MY COMPUTE FACTORIAL IT");
    printf("5! -> %d\n", my_compute_factorial_it(5));
    
    print_new_exercise("MY COMPUTE FACTORIAL REC");
    printf("5! -> %d\n", my_compute_factorial_rec(5));

    print_new_exercise("MY COMPUTE POWER IT");
    printf("10² -> %d\n", my_compute_power_it(10, 2));

    print_new_exercise("MY COMPUTE POWER REC");
    printf("10² -> %d\n", my_compute_power_rec(10, 2));

    print_new_exercise("MY COMPUTE SQUARE ROOT");
    printf("sqrt(16) -> %d\n", my_compute_square_root(16));

    print_new_exercise("MY IS PRIME");
    printf("is 16 prime ? %d\n", my_is_prime(16));
    printf("is 17 prime ? %d\n", my_is_prime(17));

    print_new_exercise("MY FIND PRIME SUP");
    printf("next prime after 16 -> %d\n", my_find_prime_sup(16));
    
    print_new_exercise("N QUEENS");
    printf("you can place %d queens in %d differents ways on a %dx%d board\n", nb_queens, n_queens(nb_queens), nb_queens, nb_queens);
    return (0);
}