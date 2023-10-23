#include "day13.h"

int square_two(void *value)
{
    int res = ((int)((long)value)) * ((int)((long)value));
    return (res);
}

int print_tree(void *data)
{
    printf("%ld,", (long)data);
    return (0);
}

int main()
{
    btree_t *root = btree_create_node((void*)29);


    btree_insert_data(&root, (void *)69, my_nbrcmp);
    btree_insert_data(&root, (void *)7, my_nbrcmp);
    btree_insert_data(&root, (void *)4, my_nbrcmp);
    btree_insert_data(&root, (void *)14, my_nbrcmp);
    
    print_new_exercise("BTREE NEW PREFIX");
    btree_apply_prefix(root, print_tree);
    my_putchar('\n');
    print_new_exercise("BTREE NEW INFIX");
    btree_apply_infix(root, print_tree);
    my_putchar('\n');
    print_new_exercise("BTREE NEW SUFFIX");
    btree_apply_suffix(root, print_tree);
    my_putchar('\n');
    
    clear_tree(&root);
    return (0);
}