#include "day11.h"

int my_list_size(linked_list_t *list)
{
    int i = 0;
    while (list != NULL) {
        list = list->next;
        i++;
    }
    return (i);
}