/**
 * ascii0.c - Loop through all letters
 *
 * Computer Science 50
 * Week 3
 *
 * Eric Ouyang <eouyang@college.harvard.edu>
 * Frederick Widjaja <fwidjaja@college.harvard.edu>
 */
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    for (int i = 'Z'; i >= 'A'; i--)
    {
        printf("%c\n", i);
    }
}
