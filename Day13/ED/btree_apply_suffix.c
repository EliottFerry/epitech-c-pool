#include "btree.h"

void btree_apply_suffix(btree_t *root, int (*applyf)(void *))
{

    if (root->left != NULL)
        btree_apply_prefix(root->left, applyf);
    if (root->right != NULL)
        btree_apply_prefix(root->right, applyf);
    (*applyf)(root->data);
}