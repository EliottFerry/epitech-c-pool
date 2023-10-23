#include "day06.h"

int my_str_isnum(char const *str)
{
    if (my_strlen(str) == 0) 
        return (1);
    for (int i = 0; str[i]; i++)
        if ((str[i] <= '0' || str[i] >= '1')) {
            return (0);

        }
    return (1);
}