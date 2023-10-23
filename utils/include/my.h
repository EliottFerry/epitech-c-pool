#ifndef MY_H_
#define MY_H_
#include "stddef.h"

// libmy functions
void my_putchar(char c);
int my_strlen(char const *str);
int my_strcmp(char const *str, char const *str2);
void my_putstr(char const *str);
int my_nbrcmp(long nb1, long nb2);
int my_getnbr(char const *str);
void my_put_nbr(int nb);
char *my_revstr(char *str);
void my_sort_int_array(int *array, int size);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
char *my_strcapitalize(char *str, char const *separators);
char *my_strcpy(char *dest, char const *src);
char *my_strlowcase(char *str);
int my_strncmp(char const *str, char const *str2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);

#endif /* MY_H_ */