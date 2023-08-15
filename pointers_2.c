#include <stdio.h>

// Remember, char x[] = char *x
int strlength(char x[])
{
    char *p = x;
    while (*p != '\0')
    {
        p++;
    }
    // printf("%c\n", *x);
    return p-x;
}

// Exercise 2: Reverse Array using pointers.
// Write a program that reverses the elements of an integer array using pointers.

void reverse_array(int arr[], int size)
{
    int *start = arr;
    int *end = arr + size - 1;

    while (start < end)
    {
        // Store one of the start/end into a temp variable.
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

/*
3. Pointer to function. Write a program that uses a pointer to a function to perform atithmetic operations on two numbers.
*/

int add(int a, int b)
{
    return a+b;
}

int subtract(int a, int b)
{
    return a-b;
}


int main()
{
    /*
    1. String length using pointers: Write a program to calculate the
    length of a string using a pointer.
    */
    // char x[] = "IVE";
    // printf("%d\n", strlength(x));
    // int numbers[] = {1,2,3,4,5};
    // int size = sizeof(numbers)/sizeof(numbers[0]);

    // reverse_array(numbers, size);
    // for (int i = 0; i < size; i++)
    // {
    //     printf("%d\n", numbers[i]);
    // }
    // printf("%d\n", size);
    int a = 5;
    int b = 3;
    int (*operation)(int, int);
    operation = add;
    printf("Addition: %d\n", operation(a,b));

    operation = subtract;
    printf("Subtraction: %d\n", operation(a,b));

    return 0;
}