/**
 * merge-sort0.c - Selection sort
 *
 * Computer Science 50
 * Week 4
 *
 * Eric Ouyang <eouyang@college.harvard.edu>
 *
 * Implement merge sort!
 */
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include "helpers.h"

#define NUM_TESTS 4

void merge_sort(int arr[], int size);

int main(void)
{
    int nums0[] = {31, 2, 5, 15, 21, 22, 11, 8, 1};
    int sz0 = 9;
    print_array(nums0, sz0);
    merge_sort(nums0, sz0);
    print_array(nums0, sz0);

    int nums1[] = {1};
    int sz1 = 1;
    print_array(nums1, sz1);
    merge_sort(nums1, sz1);
    print_array(nums1, sz1);

    int nums2[] = {};
    int sz2 = 0;
    print_array(nums2, sz2);
    merge_sort(nums2, sz2);
    print_array(nums2, sz2);

    int nums3[] = {18, 23, 12, 13};
    int sz3 = 4;
    print_array(nums3, sz3);
    merge_sort(nums3, sz3);
    print_array(nums3, sz3);
}

void merge_sort_rec(int arr[], int start, int end)
{
    /*
    don't sort if invalid array bounds or array size of 1

    // calculate constants 
    let middle = (start + end) / 2
    let length1 = middle - start + 1
    let length2 = end - middle
    
    create a copy of the first half and call it arr1
    create a copy of the second half and call it arr2
    
    merge_sort_rec(arr1, 0, length1 - 1);
    merge_sort_rec(arr2, 0, length2 - 1);
    
    while we have numbers in both arr1 and arr2 to insert 
        place next smallest between arr1 and arr2 into arr
        
    // only one of the two parts below will run
    insert remaining arr1 into arr
    insert remaining arr2 into arr
    */
}

void merge_sort(int arr[], int size)
{
    // call recursive version of merge sort which tracks
    // the start and end of what we need to sort
    merge_sort_rec(arr, 0, size - 1);
}
    