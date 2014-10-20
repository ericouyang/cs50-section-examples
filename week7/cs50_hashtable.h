/**
 * cs50_hashtable.h - Hashtable library
 *
 * Computer Science 50
 * Week 7
 *
 * Eric Ouyang <eouyang@college.harvard.edu>
 * Frederick Widjaja <fwidjaja@college.harvard.edu>
 *
 */
#include <stdbool.h>

#define HASHTABLE_SIZE 26

typedef struct node
{
    char* value;
    struct node* next;
} node;

// inserts a value into the hashtable
// return true, if added (i.e. was not already in table)
bool ht50_insert_value(node* hash_table[], char* s);

// removes a value from the hashtable
// returns true, if removal was successful
bool ht50_remove_value(node* hash_table[], char* s);

// free the memory allocated for a hashtable
void ht50_free_table(node* hash_table[]);

// utility function to print a hashtable
void ht50_print_table(node* hash_table[]);
