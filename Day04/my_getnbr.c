#include "day04.h"

int test = 0;

int my_getnbr(char const *str)
{
    long res = 0;
    int sign = 1;
    int i = 0;


    for (; str[i] == '-' || str[i] == '+'; i++) 
        if (str[i] == '-')
            sign *= -1;

    for (; str[i] && (str[i] >= '0' && str[i] <= '9'); i++) {
        res *= 10;
        res += str[i] - '0';
        if (sign > 0 ? (res > INT_MAX) : ((res * sign) < ((INT_MAX * sign) - 1)))
            return (0);
    }

    return ((int)(res * sign));
}