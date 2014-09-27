/**
 * functions0.c - Square function (Solution)
 *
 * Computer Science 50
 * Week 3
 *
 * Eric Ouyang <eouyang@college.harvard.edu>
 * Frederick Widjaja <fwidjaja@college.harvard.edu>
 *
 * Write a function that squares a given integer input
 */
#include <stdio.h>
#include <cs50.h>

// your code goes here
int square(int n)
{
    return n * n;
}

int main(void)
{
    // test the square function
    printf("The square of %i is %i.\n",  1,  square(1));
    printf("The square of %i is %i.\n",  2,  square(2));
    printf("The square of %i is %i.\n", -9,  square(9));
    printf("The square of %i is %i.\n", 12,  square(12));
}
