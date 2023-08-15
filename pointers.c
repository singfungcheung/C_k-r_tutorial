/*
A pointer is a variable that contains the address of a variable.
They are used frequently because they are sometimes the only way to express
a computation, and partly because they usually lead to more compact
and effeicient code than can be obtained in other ways. They are closely related to arrays.
*/

#include <stdio.h>

int main()
{   
    // A pointer is a group of cells that can hold an address
    // If c is a char and p is a pointer that points to it, we could represent:
    // p = &c; This means the address of c is assigned to variable p. P points to c.

    /* Exercises */
    // 1. Write a program that declares an integer variable, assigns
    // a value to it, and then uses a pointer to print the value and memory 
    // address of the variable.

    // 1. 
    // int x = 8;
    // int *p = &x;
    // printf("The address is %p\n", p);
    // printf("The number is %d\n", *p);

    /*
    2. Write a program that increments the value of an integer variable using a pointer. 
    */
    // int x = 7;
    // int *p = &x;
    // // Increment
    // (*p)++;
    // printf("%p\n",p);
    // printf("Hopefully 8: %d\n",*p);
    // printf("Hopefully 8: %d\n",x);

    /*
    3. Write a program that uses a pointer to access and print the elements 
    of an integer array.
    */
    
    // int x[5];
    // // Initalize the array
    // for (int i = 0; i < 5; i++)
    // {
    //     x[i] = i;
    //     // printf("%d\n", x[i]);
    // }

    // int *p = x;
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d\n", *(p+i));
    // }
    // // printf("%d\n",*(p)); // Should be 0.

    /*
    4. Pointer Comparison. Write a program that compares two integer values
    using pointers and prints whether they are equal or not.
    */
    int x = 7;
    int y = 7;
    int *px = &x;
    int *py = &y;
    if (*px == *py)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not equal\n");
    }
    return 0;
}