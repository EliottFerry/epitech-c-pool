#include "day11.h"

int my_apply_on_nodes(linked_list_t *list, int(*f)(void *))
{
    while (list) {
        f((list->data));
        list = list->next;
    }
    return (0);
}