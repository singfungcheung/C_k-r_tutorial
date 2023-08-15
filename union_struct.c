/*
This example has structure with pointer.
*/

#include <stdio.h>
#include <string.h>

// int main()
// {
//     return 0;
// }
union ExampleUnion {
    int intValue;
    float floatValue;
    char stringValue[20];
};

int main()
{
    union ExampleUnion data;
    data.intValue = 42;         // intValue holds a value now
    printf("Int Value: %d\n", data.intValue);

    data.floatValue = 3.14;    // floatValue now holds a value
    printf("Float Value: %.2f\n", data.floatValue);

    strcpy(data.stringValue, "Hello"); // stringValue now holds a value
    printf("String Value: %s\n", data.stringValue);
    data.floatValue = 3.14;
    printf("Float Value: %.2f\n", data.floatValue);
    return 0;
}