ls/**
 * selection-sort0.c - Selection sort
 *
 * Computer Science 50
 * Week 4
 *
 * Eric Ouyang <eouyang@college.harvard.edu>
 * Frederick Widjaja <fwidjaja@college.harvard.edu>
 *
 * Implement selection sort!
 */
#include <stdio.h>
#include <cs50.h>
#include "helpers.h"

#define NUM_TESTS 4

void selection_sort(int arr[], int size);

int main(void)
{
    int nums0[] = {31, 2, 5, 15, 21, 22, 11, 8, 1};
    int sz0 = 9;
    print_array(nums0, sz0);
    selection_sort(nums0, sz0);
    print_array(nums0, sz0);

    int nums1[] = {1};
    int sz1 = 1;
    print_array(nums1, sz1);
    selection_sort(nums1, sz1);
    print_array(nums1, sz1);

    int nums2[] = {};
    int sz2 = 0;
    print_array(nums2, sz2);
    selection_sort(nums2, sz2);
    print_array(nums2, sz2);

    int nums3[] = {18, 23, 12, 13};
    int sz3 = 4;
    print_array(nums3, sz3);
    selection_sort(nums3, sz3);
    print_array(nums3, sz3);
}

// implementation of selection sort that sorts a given array in place
void selection_sort(int arr[], int size)
{
    /*

    for each element inside of array except the last one
        # define the starting point to search for the
        # smallest element
        let min_index = index of the current element

        # iterate through non-sorted elements in array
        # to find smallest element
        for each element after the current element
            if that element is less than arr[min_index]
                set min_index = index of that element

        if min_index != index of the current element
            swap arr[min_index] and current element

    */

    // write your code here
}
