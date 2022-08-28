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
