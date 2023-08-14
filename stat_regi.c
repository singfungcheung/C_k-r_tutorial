/* This file looks to explore the static and register variables*/
#include <stdio.h>

void demo_static()
{
    // static int my_number = 0;
    // printf("Before increment: %d\n", my_number);
    static int my_number = 0;
    my_number++;
    printf("%d\n", my_number);
}

int main()
{
    // Static variables.
    /*
    This limits the scope of that object to the rest of the source file being compiled.
    Internal static variables provide private, permanent storage within a single function.
    */
    // int my_number = 0;
    // demo_static(&my_number); // 1
    // demo_static(&my_number); // 2
    demo_static();
    demo_static();

    // Register variables.
    /*
    A register declaration advises the compiler that a variable will be used a lot.
    The idea is that register variables are to be placed in machine registers, which may
    result in smaller and faster programs. But compilers are free to ignore the advice.
    */
    
    // Look up automatic/external variable and static variable. 
    // External and static variables are auto initialized to zero.
    // Automatic and register variables have undefined (garbage) initial values.

    char pattern[] = "hello";

    // This is the shorthand for the longer but equivalent
    char pattern_2[] = {'h', 'e', 'l', 'l', 'o', '\0'};

    // Size of the above arrays are 6 (5 characters plus '\0')

    // Look up #include <> and ""
    return 0;
}