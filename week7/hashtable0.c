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

    cs50_insert_value(hash_table, "apple");
    cs50_insert_value(hash_table, "banana");
    cs50_insert_value(hash_table, "cantaloupe");
    cs50_insert_value(hash_table, "kiwi");
    cs50_insert_value(hash_table, "mango");
    cs50_insert_value(hash_table, "pear");

    cs50_print_table(hash_table);

    cs50_insert_value(hash_table, "avocado");
    cs50_insert_value(hash_table, "blackberry");
    cs50_insert_value(hash_table, "butternut");
    cs50_insert_value(hash_table, "blackberry");

    cs50_print_table(hash_table);

    cs50_remove_value(hash_table, "blackberry");
    cs50_remove_value(hash_table, "kiwi");

    cs50_print_table(hash_table);

    cs50_free_table(hash_table);
}
