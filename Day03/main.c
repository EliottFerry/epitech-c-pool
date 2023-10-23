#include "day03.h"

int main(void)
{
    // Exercise 1
    print_new_exercise("MY PRINT ALPHA");
    my_print_alpha();

    // Exercise 2
    print_new_exercise("MY PRINT REVALPHA");
    my_print_revalpha();

    // Exercise 3
    print_new_exercise("MY PRINT DIGITS");
    my_print_digits();

    // Exercise 4
    print_new_exercise("MY ISNEG");
    my_isneg(-5);
    printf("\n");
    my_isneg(5);
    printf("\n");

    // Exercise 5
    print_new_exercise("MY PRINT COMB");
    my_print_comb();
    printf("\n");

    // Exercise 6
    print_new_exercise("MY PRINT COMB2");
    my_print_comb2();
    printf("\n");

    print_new_exercise("MY PUT NBR");
    my_put_nbr(123456789);
    printf("\n");
    return (0);
}