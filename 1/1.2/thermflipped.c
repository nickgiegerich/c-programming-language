#include <stdio.h>

/* print Fahrenheit-Celisius table
    for fahr = 0, 20, ...., 30 */

int main() { 
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;  // lower limit of temp table
    upper = 300; // upper limit
    step = 20; // step size

    printf("Celsius | Fahrenheit\n");
    printf("--------------------\n");
    celsius = lower;
    while (celsius <= upper) {
        fahr = (celsius * 9.0/5.0) + 32;
        printf("C: %3.0f | F: %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}