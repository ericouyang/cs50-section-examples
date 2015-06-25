/**
 * ascii1.c - Upper case conversion
 *
 * Computer Science 50
 * Week 3
 *
 * Eric Ouyang <eouyang@college.harvard.edu>
 * Frederick Widjaja <fwidjaja@college.harvard.edu>
 */
 
#include <stdio.h>
#include <cs50.h>
#include <string.h>

char capitalize(char c)
{
    return c + ('A' - 'a');
}

int main(void)
{
    char str[] = "computers";
    for (int i = 0, j = strlen(str); i < j; i++)
    {
        str[i] = capitalize(str[i]);
    }
    printf("%s\n", str);
}
