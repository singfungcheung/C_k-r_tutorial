#include <stdio.h>

/*
This program explores the basics of strings and chars.
*/

// Function that counts the number of characters in a string.
int string_count(char s[])
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    // 'x' and "x" are not the same. 'x' is the ASCII numerical
    // representation of x and "x" is a string containing x and '\0'.
    printf("%d\n", string_count("hello"));
    return 0;
}