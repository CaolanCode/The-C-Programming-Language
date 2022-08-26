//
//  main.c
//  Ex1_18
//
//  Write a program to remove trailing blanks and tabs from each line of input,
//  and to delete entirely blank lines.
//

#include <stdio.h>

#define MAXLINE 1000 /* maximum input line length */

int getLine(char line[], int maxline);

/* print the longest input line */
int main(){
    int len; /* current line length */
    char line[MAXLINE]; /* current input line */
    
    while ((len = getLine(line, MAXLINE)) > 0)
        printf("%s", line);
    
    return 0;
}

/* getline: read a line into s, return length */
int getLine(char s[],int lim){
    int c, i;
    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i) // less than MAXLINE AND c not EOF AND c not '\n'
        s[i] = c;
    
    
    return i;   // return the length on array
}
