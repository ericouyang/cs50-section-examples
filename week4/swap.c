/**
 * swap.c - Swap example
 *
 * Computer Science 50
 * Week 4
 *
 * Eric Ouyang <eouyang@college.harvard.edu>
 * Frederick Widjaja <fwidjaja@college.harvard.edu>
 *
 * Swap two elements within an array
 */
#include <stdio.h>
#include "helpers.h"

int main(void)
{
    int nums[] = {1, 2, 3, 5, 4};
    int size = 5;

    print_array(nums, size);

    // the lines below perform the swap of elements 3 and 4

    // save the value in position 3
    int tmp = nums[3];

    // set the value in position 3 to the value from position 4
    nums[3] = nums[4];

    // set the value in position 4 to the previously saved value
    nums[4] = tmp;

    print_array(nums, size);
}
