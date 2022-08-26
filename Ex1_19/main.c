//
//  main.c
//  Ex1_19
//
//  Write a function reverse(s) that reverses the character string s. Use it to
//  write a program that reverses its input a line at a time.
//

#include <stdio.h>

#define MAXLINE 1000 /* maximum input line length */

int getLine(char line[], int maxline);
void reverseLine(char line[], int len);

/* print the longest input line */
int main(){
    int len; /* current line length */
    char line[MAXLINE]; /* current input line */
    
    while ((len = getLine(line, MAXLINE)) > 0)
        reverseLine(line, len);
    
    return 0;
}

/* getline: read a line into s, return length */
int getLine(char s[],int lim){
    int c, i;
    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i) // less than MAXLINE AND c not EOF AND c not '\n'
        s[i] = c;
    
    
    return i;   // return the length on array
}

void reverseLine(char line[], int len){
    char reverse[MAXLINE];
    int j;
    j = 0;
    
    for(int i = len-1; i >= 0; i--){
        reverse[j] = line[i];
        ++j;
    }

    reverse[j] = '\n';
    ++j;
    reverse[j] = '\0';
    
    printf("%s", reverse);
}
