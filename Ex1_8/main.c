//
//  main.c
//  Ex1_8
//
//  Write a program to count blanks, tabs, and newlines.
//

#include <stdio.h>

int main() {
    
    int c, bl, nl, t;
    bl = t = nl = 0;
    
    while((c = getchar()) != EOF){
        if(c == '\n')
            ++nl;
        if(c == ' ')
            ++bl;
        if(c == '\t')
            ++t;
    }
    
    printf("\nblanks = %d, tabs = %d, newlines = %d\n", bl, t, nl);
    
    return 0;
}
