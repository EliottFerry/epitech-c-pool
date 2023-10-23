#include "day11.h"

void my_add_in_sorted_list(linked_list_t **begin, void *data, int (*cmp)())
{
    linked_list_t *sorted_new_list = *begin;
    linked_list_t *act = sorted_new_list;
    linked_list_t *new_node = malloc(sizeof(linked_list_t));

    new_node->data = data;
    new_node->next = NULL;
    while (act->next != NULL && (*cmp)(act->next->data, data) < 0)
        act = act->next;
    
    new_node->next = act->next;
    act->next = new_node;
    (*begin) = sorted_new_list;
}