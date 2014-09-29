/**
 * insertion-sort0.c - Insertion sort (Pseudocode)
 *
 * Computer Science 50
 * Week 4
 *
 * Eric Ouyang <eouyang@college.harvard.edu>
 * Frederick Widjaja <fwidjaja@college.harvard.edu>
 *
 * Implement insertion sort!
 */
#include <stdio.h>
#include <cs50.h>
#include "helpers.h"

#define NUM_TESTS 4

void insertion_sort(int arr[], int size);

int main(void)
{
    int nums0[] = {31, 2, 5, 15, 21, 22, 11, 8, 1};
    int sz0 = 9;
    print_array(nums0, sz0);
    insertion_sort(nums0, sz0);
    print_array(nums0, sz0);

    int nums1[] = {1};
    int sz1 = 1;
    print_array(nums1, sz1);
    insertion_sort(nums1, sz1);
    print_array(nums1, sz1);

    int nums2[] = {};
    int sz2 = 0;
    print_array(nums2, sz2);
    insertion_sort(nums2, sz2);
    print_array(nums2, sz2);

    int nums3[] = {18, 23, 12, 13};
    int sz3 = 4;
    print_array(nums3, sz3);
    insertion_sort(nums3, sz3);
    print_array(nums3, sz3);
}

// implementation of insertion sort that sorts a given array
void insertion_sort(int arr[], int size)
{
    /*

    for each element inside of the array except the first element
        # set a variable to represent where in the sorted array
        # we are currently trying to insert an element
        # this starts at the original position of the element
        # (think of this as the "best guess" so far in our search)
        let insertion_index = index of the element

        # store the value of the element we're trying to insert
        let x = the value of the current element to sort

        while insertion_index > 0 and x < arr[insertion_index - 1]
            set arr[insertion_index] = arr[insertion_index - 1]
            decrement insertion_index

        # set the found position to the element we're trying to insert
        set arr[insertion_index] = x
    */

    // write your code here
}
