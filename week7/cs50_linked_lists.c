/**
 * cs50_linked_lists.c - Mini Linked Lists Library
 *
 * Computer Science 50
 * Week 6
 *
 * Eric Ouyang <eouyang@college.harvard.edu>
 * Frederick Widjaja <fwidjaja@college.harvard.edu>
 *
 */
#include <stdlib.h>
#include <stdio.h>

#include "cs50_linked_lists.h"

// returns the length of a linked list
int cs50_ll_length(node* head)
{
    // TODO
    return 0;
}

// returns true if the linked list contains n
bool cs50_ll_contains(node* head, int n)
{
    // TODO
    return false;
}

// appends a new element to the beginning of a linked list
// returns the new head of the list
// returns NULL on error
node* cs50_ll_prepend(node* head, int n)
{
    // TODO
    return head;
}

// removes an element from a linked list
// returns the new head of the list
// returns NULL if not found
node* cs50_ll_remove(node* head, int n)
{
    // TODO
    return head;
}

// prints out a linked list to stdout
void cs50_ll_print(node* head)
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


// frees all elements within a linked list
void cs50_ll_free(node* head)
{
    // create a pointer to track where we are in the list
    node* curr_node = head;

    // iterate through the list and free all nodes
    while (curr_node != NULL)
    {
        // save the next node
        node* next_node = curr_node->next;

        // free the current node
        free(curr_node);

        // update the current location pointer
        curr_node = next_node;
    }
}
