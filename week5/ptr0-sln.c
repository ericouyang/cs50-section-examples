/**
 * ptr0-sln.c - Swap revisited (Solution)
 *
 * Computer Science 50
 * Week 5
 *
 * Eric Ouyang <eouyang@college.harvard.edu>
 * Frederick Widjaja <fwidjaja@college.harvard.edu>
 */

#include<stdio.h>

void swap(int* x, int* y);

int main(void)
{
    int x = 6;
    int y = 11;

    swap(&x, &y);

    printf("x: %d\n", x);
    printf("y: %d\n", y);
}

// properly swaps two integers
void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
