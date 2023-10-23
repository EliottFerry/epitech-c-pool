#include "day11.h"

void my_sort_list(linked_list_t **begin, int (*cmp)())
{
    linked_list_t *act = *begin;
    linked_list_t *p_act = NULL;
    linked_list_t *sorted_list = NULL;
    linked_list_t *p_sorted_list = NULL;

    while (act) {
        p_act = act->next;
        p_sorted_list = sorted_list;
        if (sorted_list == NULL) {
            sorted_list = act;
            sorted_list->next = p_sorted_list;
        } else {
            while (p_sorted_list->next != NULL && (*cmp)(p_sorted_list->next->data, act->data) <= 0)
                p_sorted_list = p_sorted_list->next;
            act->next = p_sorted_list->next;
            p_sorted_list->next = act;  
        }
        act = p_act;
    }
    (*begin) = sorted_list;
}