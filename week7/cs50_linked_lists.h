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
#include <stdbool.h>

typedef struct node
{
    int n;
    struct node* next;
} node;

// returns the length of a linked list
int cs50_ll_length(node* head);

// returns true if the linked list contains n
bool cs50_ll_contains(node* head, int n);

// appends a new element to the beginning of a linked list
// returns the new head of the list
// returns NULL on error
node* cs50_ll_prepend(node* head, int n);

// removes an element from a linked list
// returns the new head of the list
node* cs50_ll_remove(node* head, int n);

// frees all elements within a linked list
void cs50_ll_free(node* head);

// prints out a linked list to stdout
void cs50_ll_print(node* head);
