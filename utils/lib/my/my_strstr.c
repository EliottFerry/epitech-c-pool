#include "my.h"

int is_needle_in_str(char *str, char const *to_find)
{
    for (int idx = 0; to_find[idx]; idx++)
        if (to_find[idx] != str[idx])
            return (0);
    return (1);
}

char *my_strstr(char *str, char const *to_find)
{
    for (int i = 0; str[i]; i++)
        if (is_needle_in_str(&str[i], to_find))
            return (&str[i]);
    return (NULL);
}