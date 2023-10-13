#include "day08.h"

int main(void)
{
    // Exercice 4
    print_new_exercise("STR TO WORD ARRAY");
    char **res = str_to_word_array("-Salut les amis-test---", " -,+/");
    for (int i = 0; res[i] != NULL; i++)
        printf("%s\n", res[i]);
    for (int i = 0; res[i] != NULL; i++)
        free(res[i]);
    free(res);
    return (0);
}
