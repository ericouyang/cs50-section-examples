/**
 * cs50_hashtable.c - Hashtable library (Solution)
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
    // hash on first letter of string
    int hash = toupper(s[0]) - 'A';

    return hash % HASHTABLE_SIZE;
}

// creates a new node for the hash table
node* ht50_new_node(char* value)
{
    node* new_node = calloc(1, sizeof(node));
    if (new_node == NULL)
    {
        exit(1);
        return NULL;
    }

    new_node->value = value;
    return new_node;
}

// inserts a value into the hashtable
// return true, if added (i.e. was not already in table)
bool ht50_insert_value(node* hash_table[], char* s)
{
    int h = ht50_hash(s);
    node* head = hash_table[h];

    if (head == NULL)
    {
        hash_table[h] = ht50_new_node(s);
        return true;
    }
    else
    {
        node* n = head;
        for (; ; n = n->next)
        {
            if (strcmp(n->value, s) == 0)
            {
                return false;
            }
            else if (n->next == NULL)
            {
                break;
            }
        }
        n->next = ht50_new_node(s);
        return true;
    }
}

// removes a value from the hashtable
// returns true, if removal was successful
bool ht50_remove_value(node* hash_table[], char* s)
{
    int h = ht50_hash(s);
    node* head = hash_table[h];

    if (head == NULL)
    {
        return false;
    }

    node* previous = NULL;
    for (node* n = head; n != NULL; n = n->next)
    {
        if (strcmp(n->value, s) == 0)
        {
            if (previous == NULL)
            {
                hash_table[h] = NULL;
            }
            else
            {
                previous->next = n->next;
            }

            free(n);
            return true;
        }

        previous = n;
    }
    return false;
}

// free the memory allocated for a hashtable
void ht50_free_table(node* hash_table[])
{
    for (int i = 0; i < HASHTABLE_SIZE; i++)
    {
        for (node* n = hash_table[i]; n != NULL; )
        {
            node* next = n->next;

            free(n);

            n = next;
        }
    }
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
