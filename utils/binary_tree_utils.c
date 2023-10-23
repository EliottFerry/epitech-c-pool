#include "utils.h"

void clear_tree(btree_t **root)
{
    if ((*root)->left != NULL)
        clear_tree(&((*root)->left));
    if ((*root)->right != NULL)
        clear_tree(&((*root)->right));
    free(*root);
    (*root) = NULL;
    return;   
}