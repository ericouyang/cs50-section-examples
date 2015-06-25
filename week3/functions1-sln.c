/**
 * arrays2.c - Letters in name
 *
 * Computer Science 50
 * Week 3
 *
 * Eric Ouyang <eouyang@college.harvard.edu>
 * Frederick Widjaja <fwidjaja@college.harvard.edu>
 *
 * Prints each character in the name on one line
 */
 
#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string name = "Christopher";

    // replace the condition of the loop with a call to `strlen`
    for (int i = 0, len = strlen(name); i < len; i++)
    {
        printf("%c\n", name[i]);
    }
}
