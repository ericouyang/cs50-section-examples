/**
 * function3.c - Function Scoping
 *
 * Computer Science 50
 * Week 3
 *
 * Eric Ouyang <eouyang@college.harvard.edu>
 * Frederick Widjaja <fwidjaja@college.harvard.edu>
 */
#include <stdio.h>
#include <cs50.h>
#include <string.h>

int increment(int x)
{
    int result = x + 1;
    return result;
}

int main(void)
{
    // create a new variable n and initialize it to 5
    int x = 5;

    // increment the variable by 1
    int y = increment(x);

    // print the result
    printf("x is %i\n", x);
    printf("y is %i\n", y);
}
