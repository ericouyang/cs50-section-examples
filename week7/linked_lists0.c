/**
 * linked_lists0.c - Linked List Exercise Test
 *
 * Computer Science 50
 * Week 7
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
    list = ll50_prepend(list, 5);
    list = ll50_prepend(list, 15);
    list = ll50_prepend(list, 2);
    list = ll50_prepend(list, 9);
    list = ll50_prepend(list, 11);

    printf("Original list:\n");
    ll50_print(list);

    // test out the length function
    printf("Length: %i\n", ll50_length(list));

    printf("\n");

    // test out the contains function
    printf(
        "Contains 5? %s\n",
        ll50_contains(list, 5) ? "True" : "False"
    );
    printf(
        "Contains 6? %s\n",
        ll50_contains(list, 6) ? "True" : "False"
    );
    printf(
        "Contains 11? %s\n",
        ll50_contains(list, 11) ? "True" : "False"
    );

    printf("\n");

    printf("Removing 11, 9, 15, and 10...\n");

    list = ll50_remove(list, 11);
    list = ll50_remove(list, 9);
    list = ll50_remove(list, 15);
    list = ll50_remove(list, 10);

    printf("\n");

    printf("New list:\n");
    ll50_print(list);

    // test out the length function
    printf("Length: %i\n", ll50_length(list));

    ll50_free(list);
}
