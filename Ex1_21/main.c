//
//  main.c
//  Ex1_21
//
//  Write a program entab that replaces strings of blanks by the minimum
//  number of tabs and blanks to achieve the same spacing. Use the same tab stops as for detab.
//  When either a tab or a single blank would suffice to reach a tab stop, which should be given
//  preference?
//

#include <stdio.h>

#define MAXLINE 1000    // max length of line
#define TABLENGTH 3

int getLine(char s[], int lim);
void entab(char s[]);

int main(int argc, const char * argv[]) {
    char line[MAXLINE];
    int len = 0;
    
    while ((len = getLine(line, MAXLINE)) > 0){
        entab(line);
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

// replace spaces the length of a tab with a tab
void entab(char s[]){
    char tmp[MAXLINE];
    int c, i, j, k, l;
    i = j = 0;
    
    while((c = s[i]) != '\0'){
        if(c == ' '){
            k = i + 1;
            l = i + 2;
                if(c == s[k] && c == s[l]){     // check if three spaces are together, make tmp[] tab, else make tmp[] space
                    tmp[j] = '\t';
                    ++j;
                    i+=3;
                }else {
                    tmp[j] = c;
                    ++j;
                    ++i;
            }
        }else {
            tmp[j] = c;
            ++j;
            ++i;
        }
    }
    
    // update s[] with contents of tmp[]
    i = 0;
    while((s[i] = tmp[i]) != '\0')
        ++i;
    s[i] = '\0';
}

