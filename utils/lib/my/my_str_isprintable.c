#include "my.h"

int my_str_isprintable(char const *str)
{
    if (my_strlen(str) == 0)
        return (1);
    for (int i = 0; str[i]; i++)
        if (str[i] < ' ')
            return (0);
    return (1);
}