//
//  main.c
//  Ex1_15
//
//  Rewrite the temperature conversion program of Section 1.2 to use a function
//  for conversion.
//

#include <stdio.h>

float fahrCel(float fahr);

int main() {
    float fahr;
    float lower, upper, step;
    
    lower = 0; /* lower limit of temperatuire scale */
    upper = 300; /* upper limit */
    step = 20; /* step size */
    
    printf("Fahr   Cel\n");
    printf("----------\n");
    fahr = lower;
    while (fahr <= upper) {
        printf("%3.0f %6.1f\n", fahr, fahrCel(fahr));
        fahr = fahr + step;
    }
    
    
    return 0;
}

float fahrCel(float fahr){
    float celsius = (5.0/9.0) * (fahr-32.0);
    return celsius;
}
