//
//  main.c
//  Ex1_20
//
//  Write a program detab that replaces tabs in the input with the proper number
//  of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every n columns.
//  Should n be a variable or a symbolic parameter?
//

#include <stdio.h>

#define MAXLINE 1000    // max length of line
#define TABLENGTH 3

int getLine(char s[], int lim);
void detab(char s[]);

int main(int argc, const char * argv[]) {
    char line[MAXLINE];
    int len = 0;
    
    while ((len = getLine(line, MAXLINE)) > 0){
        detab(line);
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

// replace tab with TABLENGTH spaces
void detab(char s[]){
    char tmp[MAXLINE];
    int c, i, j, k;
    i = j = 0;
    
    while((c = s[i]) != '\0'){
        if(c == '\t'){
            k = 0;
            while(k < TABLENGTH){
                tmp[j] = ' ';
                ++j;
                ++k;
            }
        } else {
            tmp[j] = c;
            ++j;
        }
        ++i;
    }
    // update s[] with contents of tmp[]
    i = 0;
    while((s[i] = tmp[i]) != '\0')
        ++i;
    s[i] = '\0';
}
