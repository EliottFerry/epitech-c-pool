#include "day06.h"

int my_strcmp(char const *str, char const *str2)
{
    int len_str1 = my_strlen(str);
    int len_str2 = my_strlen(str2);

    for (int i = 0; ((len_str1 >= len_str2) ? len_str1 : len_str2) > i; i++) {
        if (str[i] != str2[i]) {
            return (str[i] - str2[i]);
        }
    }
    return (0);
}