//
//  main.c
//  Ex1_22
//
//  Write a program to ``fold'' long input lines into two or more shorter lines after
//  the last non-blank character that occurs before the n-th column of input. Make sure your
//  program does something intelligent with very long lines, and if there are no blanks or tabs
//  before the specified column.
//

#define MIN_LEN 100     // minimum line length
#define MAXLINE 1000    // maximum array length

#include <stdio.h>

int getLine(char s[], int lim);
void splitLine(char s[]);

int main(int argc, const char * argv[]) {
    char line[MAXLINE];
    int len = 0;
    
    while ((len = getLine(line, MAXLINE)) > 0){
        splitLine(line);
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

// split line into multiple lines
void splitLine(char s[]){
    int i, c, k;
    i = k = 0;
    
    while((c = s[i]) != '\0'){
        if(k >= MIN_LEN){
            if(c == ' ' || c == '\t'){
                putchar('\n');
                k = 0;
            }else {
                putchar(c);
                ++k;
            }
        } else {
            putchar(c);
            ++k;
        }
        ++i;
    }
}
