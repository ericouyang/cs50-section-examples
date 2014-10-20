/**
 * linked_lists0.c - Linked List Exercise Test
 *
 * Computer Science 50
 * Week 6
 *
 * Eric Ouyang <eouyang@college.harvard.edu>
 * Frederick Widjaja <fwidjaja@college.harvard.edu>
 *
 * Tests for the exercise of building a mini-linked list library
 */

#include <stdio.h>

#include "cs50_linked_lists.h"

int main(void)
{
    node* list = NULL;

    // add a bunch of elements
    list = cs50_ll_prepend(list, 5);
    list = cs50_ll_prepend(list, 15);
    list = cs50_ll_prepend(list, 2);
    list = cs50_ll_prepend(list, 9);
    list = cs50_ll_prepend(list, 11);

    printf("Original list:\n");
    cs50_ll_print(list);

    // test out the length function
    printf("Length: %i\n", cs50_ll_length(list));

    printf("\n");

    // test out the contains function
    printf(
        "Contains 5? %s\n",
        cs50_ll_contains(list, 5) ? "True" : "False"
    );
    printf(
        "Contains 6? %s\n",
        cs50_ll_contains(list, 6) ? "True" : "False"
    );
    printf(
        "Contains 11? %s\n",
        cs50_ll_contains(list, 11) ? "True" : "False"
    );

    printf("\n");

    printf("Removing 9, 15, and 10...\n");
    list = cs50_ll_remove(list, 9);
    list = cs50_ll_remove(list, 15);
    list = cs50_ll_remove(list, 10);

    printf("\n");

    printf("New list:\n");
    cs50_ll_print(list);

    // test out the length function
    printf("Length: %i\n", cs50_ll_length(list));
}
