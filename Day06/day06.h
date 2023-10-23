#ifndef DAY_06_H_
#define DAY_06_H_
#define N_BYTES 5
#define BOOL(boolean) boolean ? "True" : "False" 
#include "utils.h"
#include "my.h"

char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *str, char const *str2);
int my_strncmp(char const *str, char const *str2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str, char const *separators);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);

#endif /* DAY_06_H_ */