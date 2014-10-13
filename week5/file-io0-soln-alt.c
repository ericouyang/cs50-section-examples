/**
 * file-io0-sln-alt.c - Copy a file byte-by-byte (Alternate Solution)
 *
 * Computer Science 50
 * Week 5
 *
 * Eric Ouyang <eouyang@college.harvard.edu>
 * Frederick Widjaja <fwidjaja@college.harvard.edu>
 *
 * Opens a given file and copies it byte-by-byte to a given file destination
 */
#include <stdio.h>

int main(int argc, char* argv[])
{
    if (argc != 3)
    {
        printf("Usage: ./file-io SRC DEST\n");
        return 1;
    }

    char* input_filename = argv[1];
    char* output_filename = argv[2];

    // open input file in read only mode
    FILE* input = fopen(input_filename, "r");

    // if file was not successfully opened
    if (input == NULL)
    {
        printf(
            "There was a problem opening up %s for reading.\n",
            input_filename
        );

        return 1;
    }

    // open output file in write only mode
    FILE* output = fopen(output_filename, "w");

    // if file was not successfully opened
    if (output == NULL)
    {
        printf(
            "There was a problem opening up %s for writing.\n",
            output_filename
        );

        // close the input file
        fclose(input);

        return 2;
    }

    // loop through the file and write to output one
    // character at a time
    char c;
    while (1)
    {
        c = fgetc(input);

        // if we've reached the end of the file, quit the loop
        if (c == EOF)
        {
            break;
        }

        fputc(c, output);
    }


    // close files -- otherwise, we'd have memory leaks!
    fclose(input);
    fclose(output);

}
