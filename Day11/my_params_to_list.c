#include "day11.h"

linked_list_t *my_params_to_list(int ac, char* const *av)
{
    linked_list_t *list = NULL;
    for (int i = 0; i < ac; i++) {
        push_front_in_list((char*)av[i], &list);
    }
    return list;
}