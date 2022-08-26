//
//  main.c
//  Ex1_9
//
//  Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int c, bl;
    bl = 0;
    
    while((c = getchar()) != EOF){
        if(c == ' '){
            ++bl;
            if(bl == 1)
                putchar(c);
        }
        if(c != ' '){
            bl = 0;
            putchar(c);
        }
    }
    return 0;
}
