// Given a string and a pattern identify whether the pattern occurs in the given string or not. If the pattern occurs in the given string then print 1 otherwise print 0.

// Input Format:

// First Line - String

// Second Line - Pattern

// Output Format:

// 1 - If Pattern occurs in the given String

// 0 - If Pattern doesn't occur in the given String

// For example:

//   Input	     Result
// Rajalakshmi     1
// lak

#include<stdio.h>
#include<string.h>
int find(char *s,char *f)
{
    for(int i=0;i<=strlen(s)-strlen(f);i++)
    {
        char sub[strlen(f)];
        strncpy(sub,&s[i],strlen(f));
        if(strcmp(sub,f)==0)
        return 1;
    }
    return 0;
}
int main()
{
    char s[15],f[15];
    scanf("%s",s);
    scanf("%s",f);
    find(s,f)?printf("1"):printf("0");
}



