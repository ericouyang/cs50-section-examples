/**
 * cs50_linked_lists.c - Mini Linked Lists Library
 *
 * Computer Science 50
 * Week 7
 *
 * Eric Ouyang <eouyang@college.harvard.edu>
 * Frederick Widjaja <fwidjaja@college.harvard.edu>
 *
 */
#include <stdlib.h>
#include <stdio.h>

#include "cs50_linked_lists.h"

// returns the length of a linked list
int ll50_length(node* head)
{
    // TODO
    return 0;
}

// returns true if the linked list contains n
bool ll50_contains(node* head, int n)
{
    // TODO
    return false;
}

// prepends a new element to the beginning of a linked list
// returns the new head of the list
// returns NULL on error
node* ll50_prepend(node* head, int n)
{
    // TODO
    return head;
}

// removes an element from a linked list
// returns the new head of the list
// does nothing when element is not within the linked list
node* ll50_remove(node* head, int n)
{
    // TODO
    return head;
}

// frees all elements within a linked list
void ll50_free(node* head)
{
    // TODO
}

// prints out a linked list to stdout
void ll50_print(node* head)
{
    // create a pointer to track where we are in the list
    node* curr_node = head;

    printf("[");

    // iterate through the list and calculate the length
    while (curr_node != NULL)
    {
        printf("%i", curr_node->n);

        if (curr_node->next != NULL)
        {
            printf(", ");
        }
    }

    printf("]\n");
}
