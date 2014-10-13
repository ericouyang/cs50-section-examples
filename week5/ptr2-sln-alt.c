/**
 * ptr2-sln.c - Re-implementing strlen (Solution)
 *
 * Computer Science 50
 * Week 5
 *
 * Eric Ouyang <eouyang@college.harvard.edu>
 * Frederick Widjaja <fwidjaja@college.harvard.edu>
 */

#include <stdio.h>

int length(char* str);

int main(void)
{
    printf("%d\n", length("Hello, world"));
    printf("%d\n", length("42"));
    printf("%d\n", length("Amazing"));
}

// calculates the length of a string, or zero if str is NULL
int length(char* str)
{
    if (str == NULL)
    {
        return 0;
    }

    int count = 0;
    // initialization is omitted, since we initalize count on line 30
    for (; *(str + count) != '\0'; count++);
    return count;
}
