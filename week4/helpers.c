/**
 * helpers.c - Week 4 helpers
 *
 * Computer Science 50
 * Week 4
 *
 * Eric Ouyang <eouyang@college.harvard.edu>
 * Frederick Widjaja <fwidjaja@college.harvard.edu>
 *
 * Useful functions for week 4 example code
 */
#include <stdio.h>

void print_array(int arr[], int size)
{
    printf("{");
    if (size > 0)
    {
        for (int i = 0; i < size - 1; i++)
        {
            printf("%i, ", arr[i]);
        }
        printf("%i", arr[size - 1]);
    }
    printf("}\n");
}
