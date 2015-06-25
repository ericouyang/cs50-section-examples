/**
 * cmd0.c - Prints the command line parameters
 *
 * Computer Science 50
 * Week 3
 *
 * Eric Ouyang <eouyang@college.harvard.edu>
 * Frederick Widjaja <fwidjaja@college.harvard.edu>
 */
 
#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    // print argc
    printf("%i\n", argc);

    // print the elements inside of argv
    for (int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
}
