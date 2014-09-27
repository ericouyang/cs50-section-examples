/**
 * arrays1.c - Buggy arrays
 *
 * Computer Science 50
 * Week 3
 *
 * Eric Ouyang <eouyang@college.harvard.edu>
 * Frederick Widjaja <fwidjaja@college.harvard.edu>
 *
 * The code below has a bug. Let's find it!
 */
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string class[3] = { "Sam", "Jess", "Kim" };

    // iterate through all the elements in the array
    for (int i = 0; i <= 3; i++)
    {
        printf("%s\n", class[i]);
    }
}
