#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define SIZE 26

typedef struct node
{
    char* value;
    struct node* next;
} node;

bool insert_value(node* hash_table[], char* s);
bool remove_value(node* hash_table[], char* s);
void print_table(node* hash_table[]);
void free_table(node* hash_table[]);

int main(void)
{
    node* hash_table[SIZE] = {0};
    
    insert_value(hash_table, "apple");
    insert_value(hash_table, "banana");
    insert_value(hash_table, "cantaloupe");
    insert_value(hash_table, "kiwi");
    insert_value(hash_table, "mango");
    insert_value(hash_table, "pear");
    
    print_table(hash_table);
    
    insert_value(hash_table, "avocado");
    insert_value(hash_table, "blackberry");
    insert_value(hash_table, "butternut");
    insert_value(hash_table, "blackberry");
    
    print_table(hash_table);
    
    remove_value(hash_table, "blackberry");
    remove_value(hash_table, "kiwi");
    
    print_table(hash_table);
    
    free_table(hash_table);
}

int hash(char* s)
{
    // hash on first letter of string
    int hash = toupper(s[0]) - 'A';

    return hash % SIZE;
}

node* new_node(char* value)
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

bool insert_value(node* hash_table[], char* s)
{
    int h = hash(s);
    node* head = hash_table[h];
    
    if (head == NULL)
    {
        hash_table[h] = new_node(s);
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
        n->next = new_node(s);
        return true;
    }
}

bool remove_value(node* hash_table[], char* s)
{
    int h = hash(s);
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

void print_table(node* hash_table[])
{
    for (int i = 0; i < SIZE; i++)
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

void free_table(node* hash_table[])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (node* n = hash_table[i]; n != NULL; )
        {
            node* next = n->next;
            
            free(n);
            
            n = next;
        }
    }
}
