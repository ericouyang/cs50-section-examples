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

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define ALPHA_LEN 26

int* alpha_count(char* str);

int main(void)
{
    char* str = "The quick brown fox jumps over the lazy dog";
    int* counts = alpha_count(str);
    for (int i = 0; i < ALPHA_LEN; i++)
    {
        printf("%c: %d\t", 'a' + i, counts[i]);
    }

    free(counts);
}

int* alpha_count(char* str)
{
    // allocate some space to store our counts
    int* counts = malloc(sizeof(int) * ALPHA_LEN);

    // check for an unsuccessful allocation
    if (counts == NULL)
    {
        return counts;
    }

    // zero out the contents of the allocation
    for (int i = 0; i < ALPHA_LEN; i++)
    {
        counts[i] = 0;
    }

    // loop through the string
    for (int i = 0, n = strlen(str); i < n; i++)
    {
        // only count alpha characters
        if (isalpha(str[i]))
        {
            // increment the appropriate counter
            counts[tolower(str[i]) - 'a']++;
        }
    }

    return counts;
}
