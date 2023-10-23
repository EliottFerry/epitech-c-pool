#include "day06.h"

int my_str_isalpha(char const *str)
{
    if (my_strlen(str) == 0) 
        return (1);
    for (int i = 0; str[i]; i++)
        if ((str[i] <= 'A' || str[i] >= 'Z') && (str[i] <= 'a' || str[i] >= 'z'))
            return (0);
    return (1);
}