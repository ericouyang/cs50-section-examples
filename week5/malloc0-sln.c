/**
 * malloc0-sln.c - Malloc Exercise (Solution)
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

    // if alpha_count encounters an error
    if (counts == NULL)
    {
        printf("There was an error counting the characters.\n");
        return 1;
    }

    // print out the count of each alphabet in our string
    for (int i = 0; i < ALPHA_LEN; i++)
    {
        printf("%c: %d\t", 'a' + i, counts[i]);
    }
    printf("\n");

    free(counts);
}

/**
 *  Returns a pointer to an integer array that stores counts
 *  of alphabetic characters within a given string.
 *
 *  Returns NULL on error
 */
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
