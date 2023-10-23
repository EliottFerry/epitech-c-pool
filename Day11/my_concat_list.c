#include "day11.h"

void my_concat_list(linked_list_t **begin1, linked_list_t *begin2)
{
    linked_list_t *act = *begin1;
    while(act->next)
        act = act->next;
    act->next = begin2;
}