//
//  main.c
//  Ex1_14
//
//  Created by Caolan Mac Mahon on 25/08/2022.
//
//  Write a program to print a histogram of the frequencies of different characters
//  in its input.

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int c;
    int characters[5];
    
    for(int i = 0; i < 5; i++){
        characters[i] = 0;
    }
        
    while ((c = getchar()) != EOF) {
        
        switch(c){
            case 'a':
                ++characters[0];
                break;
            case 'e':
                ++characters[1];
                break;
            case 'i':
                ++characters[2];
                break;
            case 'o':
                ++characters[3];
                break;
            case 'u':
                ++characters[4];
                break;
        }
    }
    
    printf("\na = %d, e = %d, i = %d, o = %d, u = %d\n", characters[0], characters[1],characters[2],characters[3], characters[4]);
    return 0;
}
