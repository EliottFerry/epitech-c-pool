#include "day11.h"

linked_list_t *my_rev_list(linked_list_t **list)
{
    linked_list_t *rev_list = NULL;
    linked_list_t *tmp = NULL;
    linked_list_t *act = *list;
    while (act) {
        tmp = act;
        act = act->next;
        tmp->next = rev_list;
        rev_list = tmp;
    }
    *list = rev_list;
    return (*list);
}
