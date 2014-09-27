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
    int nums0[] = {1, 2, 5, 8, 11, 15, 21, 22, 31};
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

    int nums3[] = {12, 13, 18, 23};
    int sz3 = 4;
    print_array(nums3, sz3);
    insertion_sort(nums3, sz3);
    print_array(nums3, sz3);
}

// implementation of insertion sort that sorts a given array
void insertion_sort(int arr[], int size)
{
    /*

    for each element inside of the array
        # set a variable to represent where in the sorted array
        # we are currently trying to insert an element
        # this starts at the original position of the element
        let curr_index = index of the element

        let x = the value of the current element to sort

        while curr_index > 0 and x < arr[curr_index - 1]
            shift arr[curr_index - 1] right one spot
            decrement curr_index

        # set the found position to the element we're trying to insert
        set arr[curr_index] = x
    */

    // write your code here
}
