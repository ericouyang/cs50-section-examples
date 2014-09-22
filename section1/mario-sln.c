/**
 * mario.c
 *
 * Nate Hardison <nate@cs.harvard.edu>
 *
 * Prints out a half pyramid with a user-supplied height.
 */

#include <cs50.h>
#include <stdio.h>

#define MAX_HEIGHT 23

int main(int argc, string argv[])
{
    // check if argument count is correct
    if (argc != 2) {
        printf("Usage: ./mario height\n");
        return 1;
    }

    // get the height from the first argument
    int height = atoi(argv[1]);

    // build pyramid from the top down (can't do bottom-up with printf)
    for (int row = height; row > 0; row--)
    {
        // when row == 1, pyramid should be flush against left side
        int spaces = row - 1;

        // print out the spaces first
        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }

        // there are two ## at the top of a pyramid (when height == row)
        int hashes = height - row + 2;

        // now print out all of the hashes
        for (int j = 0; j < hashes; j++)
        {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}
