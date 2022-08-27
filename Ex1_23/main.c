//
//  main.c
//  Ex1_23
//
//  Write a program to remove all comments from a C program. Don't forget to
//  handle quoted strings and character constants properly. C comments don't nest.
//

#define MAXLINE 1000    // maximum array length

#include <stdio.h>

int getLine(char s[], int lim);
void printLine(char s[]);

int main(int argc, const char * argv[]) {
    char line[MAXLINE];
    int len = 0;
    
    while ((len = getLine(line, MAXLINE)) > 0){
        printLine(line);
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

// print line without comments
void printLine(char s[]){
    int i, c, j, comment;
    i = j = comment = 0;
    
    
    while((c = s[i]) != '\0'){
        if(c == '/'){                   // = /
            ++i;
            if(s[i] == '/'){            // = //
                ++i;
                while(s[i] != '\n')     // loop through until '\n'
                    ++i;
                
                if(s[i] == '\n')        // if '\n', print '\n'
                    putchar('\n');
                
            } else if(s[i] == '*'){     // = /*
                ++i;
                while(s[i] != '*')      // loop through until *
                    ++i;
                
                if(s[i] == '*'){        // = *
                    ++i;
                    if(s[i] == '/')    // = */
                        ++i;
                }
            }
        } else {
            putchar(c);                 // print c when not in comment
            ++i;
        }
    }
}
