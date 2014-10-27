/**
 * str_funcs.c - Misc string manipulation functions
 *
 * Computer Science 50
 * Week 8
 *
 * Eric Ouyang <eouyang@college.harvard.edu>
 * Frederick Widjaja <fwidjaja@college.harvard.edu>
 *
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char* str = "This is CS50.\r\nThese are helpful string functions.";
    printf("Original:\n%s\n\n", str);

    // get a pointer to the substring starting at the first space
    char* space1 = strchr(str, ' ');
    if (space1 == NULL)
    {
        // do something here -- error checking, for example
        // we technically don't need to do any error checking here
        // because we know that str is a constant string
        return 1;
    }

    // make a substring starting from right after the first space
    char* substr1 = space1 + 1;
    printf("substr1:\n%s\n\n", substr1);

    // calculate the length of the first segment using pointer arithmetic
    int length1 = space1 - str;
    printf("Length of the first word: %d\n\n", length1);

    // get a pointer to the substring starting at the second space
    // notice that substr1 is used here, not str
    char* space2 = strchr(substr1, ' ');
    if (space2 == NULL)
    {
        // do something here
        return 1;
    }

    // make a substring starting from right after the second space
    char* substr2 = space2 + 1;
    printf("substr2:\n%s\n\n", substr2);

    // make a buffer for storing the second word within the string
    // notice the + 1 at the end -- this is for the \0 at
    // the end of the string
    char word2[space2 - substr1 + 1];

    // copy the substring into word2
    strncpy(word2, substr1, substr2 - substr1);

    // null terminate the word, since strncpy doesn't do it for us
    // (we can use sizeof since we're using a fixed sized buffer)
    word2[sizeof(word2) - 1] = '\0';

    printf("word2:\n%s\n\n", word2);

    // we could use strlen(word2), but we know the length already,
    // so no need to calculate it again!
    printf("Length of the second word: %d\n\n", sizeof(word2) - 1);

    // get a pointer to the first CRLF within str
    char* crlf1 = strstr(str, "\r\n");
    if (crlf1 == NULL)
    {
        // do something here
        return 1;
    }

    // make a substring of the first line of str
    int line1_len = crlf1 - str;
    char line1[line1_len + 1];
    strncpy(line1, str, line1_len);
    line1[line1_len] = '\0';

    printf("line1:\n%s\n\n", line1);

    // make a substring of the second line
    char* line2 = crlf1 + 2;
    int line2_len = strlen(line2);

    // let's put these two lines together without the CRLF
    char str2[line1_len + line2_len + 1];
    strcpy(str2, line1);
    strcat(str2, line2);

    printf("str2:\n%s\n\n", str2);

    // we could use strlen(str2), but we know the length already,
    // so no need to calculate it again!
    printf("Length of str2: %d\n\n", sizeof(str2) - 1);

    // get a pointer to the last space in the string
    char* last_space = strrchr(str, ' ');
    if (last_space == NULL)
    {
        // do something
        return 1;
    }

    // make a substring right after the last space
    char* substr3 = last_space + 1;

    // get a pointer to the last period in the string
    char* last_period = strrchr(str, '.');
    if (last_space == NULL)
    {
        // do something
        return 1;
    }

    // save the last word in the string
    // we can use strlen here because we know that
    // substr3 is null-terminated (same null as str)
    int last_word_len = last_period - substr3;
    char last_word[last_word_len + 1];
    strncpy(last_word, substr3, last_word_len);
    last_word[last_word_len] = '\0';

    printf("Last word: %s\n", last_word);
}
