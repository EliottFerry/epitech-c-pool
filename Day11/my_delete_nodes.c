#include "day11.h"

int my_delete_nodes(linked_list_t **begin, void const *data_ref, int (*cmp)())
{
    linked_list_t *act = *begin;
    linked_list_t *prev = NULL;
    while (act) {
        if ((*cmp)(data_ref, act->data) == 0) {
            if (prev == NULL) {
                (*begin) = (*begin)->next;
                free(act);
                act = *begin;
            }
            else {
                prev->next = act->next;
                free(act);
                act = prev;
            }
        } else
            prev = act;
        act = act->next;
    }
    return (0);
}