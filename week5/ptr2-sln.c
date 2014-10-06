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

int length(char*);

int main(void)
{
    printf("%d\n", length("Hello, world"));
    printf("%d\n", length("42"));
    printf("%d\n", length("Amazing"));
}

int length(char* str)
{
    int count = 0;
    for (char* ptr = str; *ptr != '\0'; ptr++)
    {
        count++;
    }
    return count;
}
