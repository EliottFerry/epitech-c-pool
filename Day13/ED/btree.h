#ifndef BTREE_H_
#define BTREE_H_

#include "utils.h"
#include "my.h"

btree_t *btree_create_node(void *item);
void btree_apply_prefix(btree_t *root, int (*applyf)(void *));
void btree_apply_infix(btree_t *root, int (*applyf)(void *));
void btree_apply_suffix(btree_t *root, int (*applyf)(void *));
void btree_insert_data(btree_t **root, void *item, int (*cmpf)());

#endif /* BTREE_H_ */