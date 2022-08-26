//
//  main.c
//  Ex1_17
//
//  Write a program to print all input lines that are longer than 80 characters.
//

#include <stdio.h>

#define MAXLINE 1000 /* maximum input line length */
#define MINLENGTH 80 // minimum length of line

int getLine(char line[], int maxline);

/* print the longest input line */
int main(){
    int len; /* current line length */
    char line[MAXLINE]; /* current input line */
    
    while ((len = getLine(line, MAXLINE)) > 0)
        if (len > MINLENGTH) {
            printf("\n%s\n", line);
        }
    
    return 0;
}

/* getline: read a line into s, return length */
int getLine(char s[],int lim){
    int c, i;
    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i) // less than MAXLINE AND c not EOF AND c not '\n'
        s[i] = c;
    
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    
    s[i] = '\0';
    
    return i;   // return the length on array
}


