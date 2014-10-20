/**
 * hashtable.c - Hashtable example
 *
 * Computer Science 50
 * Week 7
 *
 * Eric Ouyang <eouyang@college.harvard.edu>
 * Frederick Widjaja <fwidjaja@college.harvard.edu>
 *
 */
#include "cs50_hashtable.h"

int main(void)
{
    node* hash_table[HASHTABLE_SIZE] = {0};

    ht50_insert_value(hash_table, "apple");
    ht50_insert_value(hash_table, "banana");
    ht50_insert_value(hash_table, "cantaloupe");
    ht50_insert_value(hash_table, "kiwi");
    ht50_insert_value(hash_table, "mango");
    ht50_insert_value(hash_table, "pear");

    ht50_print_table(hash_table);

    ht50_insert_value(hash_table, "avocado");
    ht50_insert_value(hash_table, "blackberry");
    ht50_insert_value(hash_table, "butternut");
    ht50_insert_value(hash_table, "blackberry");

    ht50_print_table(hash_table);

    ht50_remove_value(hash_table, "blackberry");
    ht50_remove_value(hash_table, "kiwi");

    ht50_print_table(hash_table);

    ht50_free_table(hash_table);
}
