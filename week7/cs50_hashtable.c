/**
 * cs50_hashtable.c - Hashtable library
 *
 * Computer Science 50
 * Week 7
 *
 * Eric Ouyang <eouyang@college.harvard.edu>
 * Frederick Widjaja <fwidjaja@college.harvard.edu>
 *
 */
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "cs50_hashtable.h"

// hashes a given string
int ht50_hash(char* s)
{
    // TODO
    return 0;
}

// creates a new node for the hash table
node* ht50_new_node(char* value)
{
    // TODO
    return NULL;
}

// inserts a value into the hashtable
// return true, if added (i.e. was not already in table)
bool ht50_insert_value(node* hash_table[], char* s)
{
    // TODO
    return false;
}

// removes a value from the hashtable
// returns true, if removal was successful
bool ht50_remove_value(node* hash_table[], char* s)
{
    // TODO
    return false;
}

// free the memory allocated for a hashtable
void ht50_free_table(node* hash_table[])
{
    // TODO
}

// utility function to print a hashtable
void ht50_print_table(node* hash_table[])
{
    for (int i = 0; i < HASHTABLE_SIZE; i++)
    {
        printf("%c: ", 'a' + i);

        bool first = true;
        for (node* n = hash_table[i]; n != NULL; n = n->next)
        {
            if (first)
            {
                first = false;
            }
            else
            {
                printf("->");
            }

            printf("%s", n->value);
        }

        printf("\n");
    }

    printf("\n");
}
