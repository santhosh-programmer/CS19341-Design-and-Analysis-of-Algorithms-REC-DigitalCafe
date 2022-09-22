#include<stdio.h>
#include<string.h>
int find(char *s,char *c)
{
    for(int i=0;i<strlen(s);i++)
    {
        char *flag=strchr(c,s[i]);
        if(flag)
        flag[0]='3';
        else
        return 0;
    }
    return strlen(s);
}
int main()
{
    int n,ans=0;
    scanf("%d",&n);
    char s[n][10];
    for(int i=0;i<n;i++)
    scanf("%s",s[i]);
    char c[10],temp[10];
    scanf("%s",c);
    for(int i=0;i<n;i++)
    {
        strcpy(temp,c);
        ans+=find(s[i],temp);
    }
    printf("%d",ans);
}
