#include "day06.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    for (int i = 0; i < n; i++)
        dest[i] = src[i];
    if (n >= my_strlen(src))
        dest[my_strlen(dest)] = '\0';
    return (dest);
}