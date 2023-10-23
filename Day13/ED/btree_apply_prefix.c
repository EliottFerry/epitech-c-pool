#include "btree.h"

void btree_apply_prefix(btree_t *root, int (*applyf)(void *))
{
    (*applyf)(root->data);
    if (root->left != NULL)
        btree_apply_prefix(root->left, applyf);
    if (root->right != NULL)
        btree_apply_prefix(root->right, applyf);
}