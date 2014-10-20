/**
 * cs50_linked_lists_sln.c -  Mini Linked Lists Library (Solution)
 *
 * Computer Science 50
 * Week 6
 *
 * Eric Ouyang <eouyang@college.harvard.edu>
 * Frederick Widjaja <fwidjaja@college.harvard.edu>
 *
 */
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#include "cs50_linked_lists.h"

// returns the length of a linked list
int cs50_ll_length(node* head)
{
    // create a pointer to track where we are in the list
    node* curr_node = head;

    // iterate through the list and calculate the length
    int length = 0;
    while (curr_node != NULL)
    {
        length++;

        curr_node = curr_node->next;
    }

    return length;
}

// returns true if the linked list contains n
bool cs50_ll_contains(node* head, int n)
{
    // create a pointer to track where we are in the list
    node* curr_node = head;

    // iterate through the list and return true if element found
    while (curr_node != NULL)
    {
        if (curr_node->n == n)
        {
            return true;
        }

        curr_node = curr_node->next;
    }

    // the element wasn't within the linked list
    return false;
}

// appends a new element to the beginning of a linked list
// returns the new head of the list
// returns NULL on error
node* cs50_ll_prepend(node* head, int n)
{
    // make an new node
    node* new_node = malloc(sizeof(node));
    if (new_node == NULL)
    {
        return NULL;
    }

    // set the value of the node
    new_node->n = n;

    // point to the next element in the list, which is
    // the previous head of the list
    new_node->next = head;

    return new_node;
}

// removes an element from a linked list
// returns the new head of the list
node* cs50_ll_remove(node* head, int n)
{
    // create a pointer to track where we previously were
    // within the list
    node* prev_node = NULL;

    // create a pointer to track where we are in the list
    node* curr_node = head;

    while (curr_node != NULL)
    {
        if (curr_node->n == n)
        {
            // save the pointer to the next node
            node* next_node = curr_node->next;

            // release the memory for the node we're deleting
            free(curr_node);

            // if we have a previous node, remove the current element
            // and link the previous node to the next node
            if (prev_node != NULL)
            {
                prev_node->next = next_node;
                return head;
            }

            // if n is at the head of the list (no previous node)
            // return the next node, which will be the new head of list
            return next_node;
        }

        // update the pointers
        prev_node = curr_node;
        curr_node = curr_node->next;
    }

    // the element wasn't within the linked list,
    // return the original head
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

        curr_node = curr_node->next;
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
