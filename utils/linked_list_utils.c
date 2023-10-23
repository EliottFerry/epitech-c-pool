#include "utils.h"

void push_front_in_list(void* to_push, linked_list_t **list)
{
    linked_list_t *new_node = malloc(sizeof(linked_list_t));
    new_node->data = to_push;
    new_node->next = *list;
    *list = new_node;
}

void push_back_in_list(void* to_push, linked_list_t **list)
{
    linked_list_t *new_node = malloc(sizeof(linked_list_t));
    linked_list_t *tmp = *list;
    new_node->data = to_push;
    new_node->next = NULL;
    if (*list == NULL) {
        *list = new_node;
        return;
    }
    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = new_node;
    return;
}

void print_list(linked_list_t *list)
{
    while (list != NULL) {
        printf("%s", (char*)list->data);
        if (list->next)
            printf("->");
        list = list->next;
    }
    printf("\n");
}

void pop_first_elem(linked_list_t **list)
{
    linked_list_t *tmp = *list;
    (*list) = (*list)->next;
    free(tmp);
}

void pop_last_elem(linked_list_t **list)
{
    linked_list_t *end = *list;
    linked_list_t *prev = NULL;
    while (end->next != NULL) {
        prev = end;
        end = end->next;
    }
    prev->next = NULL;
    free(end);
}

void empty_list(linked_list_t **list)
{
    linked_list_t *current = *list;
    linked_list_t *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
    *list = NULL;
}
