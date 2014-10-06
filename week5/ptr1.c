/**
 * ptr1.c - Example code for pointer arithmetic
 *
 * Computer Science 50
 * Week 5
 *
 * Eric Ouyang <eouyang@college.harvard.edu>
 * Frederick Widjaja <fwidjaja@college.harvard.edu>
 *
 */
#include <stdio.h>

int main(int argc, char* argv[])
{
    // create a new array
    int nums[] = {1, 2, 3};

    // create a pointer to the beginning of the array
    int* ptr = &nums[0];
    printf("%p\n", ptr);

    // update the pointer using pointer arithmetic!
    ptr += 1;
    printf("%p\n", ptr);

    // what will be printed?
    printf("%i\n", *ptr);

    // print the difference in addresses
    printf("%lu\n", (char*) ptr - (char*) &nums[0]);
}
