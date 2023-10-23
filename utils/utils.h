#ifndef UTILS_H_
#define UTILS_H_
#define INT_MAX 2147483647
#include <sys/ioctl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print_new_exercise(char const *str);

// Linked list creation, used in day11
typedef struct linked_list_s {
    void* data;
    struct linked_list_s *next;
} linked_list_t;

// Linked list utils
void push_front_in_list(void* to_push, linked_list_t **list);
void push_back_in_list(void* to_push, linked_list_t **list);
void print_list(linked_list_t *list);
void pop_first_elem(linked_list_t **list);
void pop_last_elem(linked_list_t **list);
void empty_list(linked_list_t **list);

// Binary tree creation, used in day 13
typedef struct btree {
    struct btree *left;
    struct btree *right;
    void *data;
    enum RB_COLOR { RB_BLACK, RB_RED } color;
} btree_t;

// Binary tree utils
void clear_tree(btree_t **root);

#endif /* UTILS_H_ */