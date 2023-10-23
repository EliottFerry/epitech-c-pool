#include "day11.h"

int main(int ac, char **av)
{
    linked_list_t *list = my_params_to_list(ac, av);
    linked_list_t *list2 = my_params_to_list(ac, av);
    linked_list_t *list3 = my_params_to_list(ac, av);
    
    char *cmp = "Hello";

    print_new_exercise("MY PARAMS TO LIST");
    print_list(list);
    print_new_exercise("MY LIST SIZE");
    printf("%d\n", my_list_size(list));
    print_new_exercise("MY REV LIST");
    printf("Before rev:\n");
    print_list(list);
    list = my_rev_list(&list);
    printf("After rev:\n");
    print_list(list);
    print_new_exercise("MY APPLY ON NODES");
    my_apply_on_nodes(list, (int(*)(void *))my_strlen);
    print_new_exercise("MY APPLY ON MATCHING NODES");
    my_apply_on_matching_nodes(list, (int(*)(void *))my_strlen, (char *)cmp, my_strcmp);

    print_new_exercise("MY FIND NODE");
    linked_list_t *find_list = my_find_node(list, "Hello", my_strcmp);
    print_list(find_list);
    print_new_exercise("MY DELETE NODES");
    my_delete_nodes(&list, "Hello", my_strcmp);
    print_list(list);

    print_new_exercise("MY CONCAT LIST");
    my_concat_list(&list, list2);
    print_list(list);

    print_new_exercise("MY SORT LIST");
    my_sort_list(&list, my_strcmp);
    print_list(list);

    print_new_exercise("MY ADD IN SORTED LIST");
    my_add_in_sorted_list(&list, "Z", my_strcmp);
    print_list(list);

    print_new_exercise("MY MERGE");
    my_merge(&list, list3, my_strcmp);
    print_list(list2);

    empty_list(&list);
    return (0);
}
