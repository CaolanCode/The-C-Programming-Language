//
//  main.c
//  Ex1_6
//
//  Verify that the expression getchar() != EOF is 0 or 1.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    printf("%d\n", getchar() != EOF);  // returns 1
    
    return 0;
}
