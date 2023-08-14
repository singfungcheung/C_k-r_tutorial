/*
printf cheat sheet.
*/

#include <stdio.h>

int main()
{
    // %d print as decimal integer.
    int my_number = 8;
    printf("%%d print as decimal integer:");
    // printf("%%d:");
    printf("%d\n", my_number);
    // printf("\n");

    // %6d print as decimal integer, at least 6 characters wide.
    printf("%%6d print as decimal integer, at least 6 characters wide:");
    // printf("%%6d:");
    printf("%6d\n", my_number);
    // printf("\n");

    // %f print as floating point.
    float my_number2 = 8.88;
    printf("%%f print as floating point:");
    printf("%f\n", my_number2);

    // %6f print as a floating point, at least 6 characters wide.
    printf("%%6f print as floating point, at least 6 characters wide:");
    printf("%6f\n", my_number2);

    // %.2f print as a floating point, 2 chacters after the decimal point.
    printf("%%.2f print as a floating point, 2 chacters after the decimal point:");
    printf("%.2f\n", my_number2);

    // %6.3f print as a floating point, at least 6 wide and 2 after decimal point.
    printf("%%6.3f print as a floating point, at least 6 wide and 2 after decimal point:");
    printf("%6.3f\n", my_number2);

    return 0;
}