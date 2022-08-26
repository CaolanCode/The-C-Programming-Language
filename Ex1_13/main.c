//
//  main.c
//  Ex1_13
//
//  Write a program to print a histogram of the lengths of words in its input. It is
//  easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.
//

#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

int main(int argc, const char * argv[]) {
    int c, state, nl;
    state = OUT;
    nl = 0;
    
        
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t'){
            state = OUT;
            ++nl;
            if(nl == 1)
                putchar('\n');
        } else{
            putchar('|');
            nl = 0;
        }
        if (state == OUT) {
            state = IN;
        }
        
    }
    return 0;
}
