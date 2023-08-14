/*
This program converts temperature from F to C
*/

#include <stdio.h>

int main()
{
    // Declare variables for fahr and celsius.
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;    // lower limit of temperature table
    upper = 300;  // upper limit
    step = 20;    // step size

    fahr = lower;

    printf("fahr\tcelsius\n");
    while (fahr <= upper)
    {
        // printf("%3.4f\n", 5.0/9.0);
        celsius = 5/9.0 * (fahr - 32);
        // printf("%d\t%d\n", fahr, celsius); // %d specifies integer
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr += step;
    }

    // from celius to fahrenheit
    celsius = lower;

    printf("celsius\tfahr\n");
    while (celsius <= upper)
    {
        fahr = 9.0/5 * celsius + 32;
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        celsius += step;
    }


    return 0;
}

