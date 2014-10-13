/**
 * malloc0.c - Malloc Exercise
 *
 * Computer Science 50
 * Week 5
 *
 * Eric Ouyang <eouyang@college.harvard.edu>
 * Frederick Widjaja <fwidjaja@college.harvard.edu>
 *
 * An example of how malloc can be used.
 *
 */

#include <stdio.h>

#define ALPHA_LEN 26

int* alpha_count(char* str);

int main(void)
{
    char* str = "The quick brown fox jumps over the lazy dog";
    int* counts = alpha_count(str);
    for (int i = 0; i < ALPHA_LEN; i++)
    {
        printf("%c: %d\n", 'a' + i, counts[i]);
    }
}

/**
 *  Returns a pointer to an integer array that stores counts
 *  of alphabetic characters within a given string.
 *
 *  Returns NULL on error
 */
int* alpha_count(char* str)
{
    return NULL;
}
