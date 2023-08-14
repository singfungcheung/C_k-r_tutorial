#include <stdio.h>

int main()
{
    // This program shows another way to do conditionals.
    // Example
    int a = 5;
    int b = 3;
    int z;
    if (a > b)
    {
        z = a;
    }
    else
    {
        z = b;
    }

    // Another way to do this is:
    z = (a > b) ? a : b;
    
    return 0;
}