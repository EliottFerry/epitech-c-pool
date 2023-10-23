#include "btree.h"

void btree_apply_infix(btree_t *root, int (*applyf)(void *))
{
    if (root->left != NULL)
        btree_apply_prefix(root->left, applyf);
    (*applyf)(root->data);
    if (root->right != NULL)
        btree_apply_prefix(root->right, applyf);
}