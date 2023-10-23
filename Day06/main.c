#include "day06.h"

void print_n_char(char const *str, int n)
{
    for (int i = 0; i < n; i++)
        my_putchar(str[i]);
    my_putchar('\n');
}

int main(void)
{
    char *test = "Hello";
    printf("%c\n", *++test);
    printf("%c\n", *test);

    char src[] = "Hello World!";
    char needle[] = "World";
    char *dest = malloc((my_strlen(src) + 1) * sizeof(char));
    char *ndest = malloc(N_BYTES * sizeof(char));

    print_new_exercise("MY STRCPY");
    my_strcpy(dest, src);
    printf("Here is the copied string: %s\n", dest);

    print_new_exercise("MY STRNCPY");
    my_strncpy(ndest, src, N_BYTES);
    printf("Here is the %d bytes copied: \n", N_BYTES);
    print_n_char(ndest, N_BYTES);

    print_new_exercise("MY REVSTR");
    my_revstr(dest);
    printf("Here is the reversed string: %s\n", dest);

    print_new_exercise("MY STRSTR");
    printf("Trying to find '%s' in the string '%s': %s\n", needle, src, my_strstr(src, needle));

    print_new_exercise("MY STRCMP");
    printf("Comparing '%s' and '%s'; %d\n", dest, src, my_strcmp(ndest, src));

    print_new_exercise("MY STRNCMP");
    printf("Comparing the first %d bytes of '%s' and '%s'; %d\n", N_BYTES, dest, src, my_strncmp(ndest, src, N_BYTES));

    print_new_exercise("MY STRUPCASE");
    printf("Transorming '%s' in ", src);
    printf("'%s'\n", my_strupcase(src));

    print_new_exercise("MY STRLOWCASE");
    printf("Transforming '%s' in ", dest);
    printf("'%s'\n", my_strlowcase(dest));

    print_new_exercise("MY STRCAPITALIZE");
    printf("Transforming '%s' in ", dest);
    printf("'%s'\n", my_strcapitalize(dest, " ,-+?.;"));

    print_new_exercise("My STR IS ALPHA");
    printf("Is '%s' only composed of alpha characters: %s\n", src, BOOL(my_str_isalpha(src)));

    print_new_exercise("MY STR IS NUM");
    printf("The string '%s' is only composed of numbers: %s\n", src, BOOL(my_str_isnum(src)));

    print_new_exercise("MY STR IS LOWER");
    printf("The string '%s' is only composed of lowercase characters: %s\n", dest, BOOL(my_str_islower(dest)));

    print_new_exercise("MY STR IS UPPER");
    printf("The string '%s' is only composed of uppercase characters: %s\n", src, BOOL(my_str_isupper(src)));

    print_new_exercise("MY STR IS PRINTABLE");
    printf("The string '%s' is only composed of printable characters: %s\n", src, BOOL(my_str_isprintable(src)));

    free(dest);
    free(ndest);
    return (0);
}