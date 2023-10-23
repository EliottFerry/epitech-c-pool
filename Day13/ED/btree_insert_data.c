#include "btree.h"

void btree_insert_data(btree_t **root, void *item, int (*cmpf)())
{
    if ((*cmpf)(((long)(*root)->data), ((long)item)) >= 0) {
        if ((*root)->left == NULL) {
            (*root)->left = btree_create_node(item);
            return;
        } else {
            btree_insert_data(&((*root)->left), item, cmpf);
        }
    } else {
        if ((*root)->right == NULL) {
            (*root)->right = btree_create_node(item);
            return;
        } else {
            btree_insert_data(&((*root)->right), item, cmpf);
        }
    }
    return;
}