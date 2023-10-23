#include "day06.h"

int is_separator(char c, char const *separators)
{
    for (int i = 0; separators[i]; i++)
        if (c == separators[i])
            return (1);
    return (0);
}

char *my_strcapitalize(char *str, char const *separators)
{
    int capitalize = 0;

    for (int i = 0; str[i]; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') && capitalize)
            str[i] -= 32;
        capitalize = 0;
        if (is_separator(str[i], separators))
            capitalize = 1;
    }
    return (str);
}