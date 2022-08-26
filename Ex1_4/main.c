//
//  main.c
//  Ex1_4
//  Write a program to print the corresponding Celsius to Fahrenheit table.

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    float fahr, celsius;
    float lower, upper, step;
    
    lower = 0; /* lower limit of temperatuire scale */
    upper = 300; /* upper limit */
    step = 20; /* step size */
    celsius = lower;
    
    while (celsius <= upper) {
        fahr = (celsius * 9/5) + 32;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
        }
    return 0;
}
