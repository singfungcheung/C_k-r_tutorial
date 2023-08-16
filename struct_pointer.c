#include <stdio.h>

typedef int Age; // Now "Age is an alias for the "int" data type.
int main()
{
    /*
    In this file, we take a look at "typedef" and some 
    */
    Age person_age = 25;
    printf("%d\n", person_age);
    return 0;
}