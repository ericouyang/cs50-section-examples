/**
 * ascii1.c - Upper case conversion
 *
 * Computer Science 50
 * Section 1
 *
 * Eric Ouyang <eouyang@college.harvard.edu>
 * Frederick Widjaja <fwidjaja@college.harvard.edu>
 */
#include <stdio.h>
#include <cs50.h>
#include <string.h>

// capitalize a given lower case letter

int main(void) {
    char str[] = "computers";
    for (int i = 0, j = strlen(str); i < j; i++)
    {
        // capitalize the ith letter and replace the element in the array
        str[i] = capitalize(str[i]);
    }
    printf("%s\n", str);
}
