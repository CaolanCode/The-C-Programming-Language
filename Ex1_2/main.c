//
//  main.c
//  Ex1_2
//  Experiment to find out what happens when prints's argument string contains
//  \c, where c is some character not listed above.

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    printf("\c");  // Unknown escape sequence '\c'
    return 0;
}
