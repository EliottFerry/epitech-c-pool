#include "day04.h"

int main(void)
{
    int a = 2;
    int b = 20;
    char sentence[] = "Hello World!";
    int array[ARRAY_SIZE] = {6, 2, 3, -4,1};

    print_new_exercise("MY SWAP");
    printf("Before swapping a=%d and b=%d\n", a, b);
    my_swap(&a, &b);
    printf("After swapping a=%d and b=%d\n", a, b);

    print_new_exercise("MY PUTSTR");
    my_putstr("Here is a string printed with my_putstr\n");

    print_new_exercise("MY STRLEN");
    printf("The len of the string 'Hello World!' is: %d characters\n", my_strlen(sentence));

    print_new_exercise("MY EVIL STR");
    printf("%s\n", my_evil_str(sentence));

    print_new_exercise("MY GETNBR");
    printf("%d\n", my_getnbr("-----+23382753180750131"));

    print_new_exercise("MY SORT INT ARRAY");
    printf("Array before sorting:\n");
    for (int i = 0; i <= ARRAY_SIZE - 1; i++)
        printf("array[%d]: %d\n", i, array[i]);
    my_sort_int_array(array, ARRAY_SIZE);
    printf("Array after sorting:\n");
    for (int i = 0; i <= ARRAY_SIZE - 1; i++)
        printf("array[%d]: %d\n", i, array[i]);
    return (0);
}