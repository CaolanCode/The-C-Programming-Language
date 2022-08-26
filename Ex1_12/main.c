//
//  main.c
//  Ex1_12
//
//  Write a program that prints its input one word per line.
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
            putchar(c);
            nl = 0;
        }
        if (state == OUT) {
            state = IN;
        }
        
    }
    return 0;
}
