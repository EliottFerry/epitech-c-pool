#include "btree.h"

btree_t *btree_create_node(void *item)
{
    btree_t *new_node = malloc(sizeof(btree_t));

    new_node->left = NULL;
    new_node->right = NULL;
    new_node->data = item;
    return (new_node);
}