// Given two strings find the length of the common longest subsequence(need not be contiguous) between the two.

// Example:

//  s1: ggtabe

//  s2: tgatasb
 
//  The length is 4


#include<stdio.h>
#include<string.h>
int n,m,t1,t2;
int find(char s1[],char s2[],int i,int j,int ans[][m])
{
    if(i==n||j==m)
        return 0;
    else if(s1[i]==s2[j])
        return ans[i][j]=1+find(s1,s2,i+1,j+1,ans);
    else if(ans[i][j]!=0)
        return ans[i][j];
    t1=find(s1,s2,i+1,j,ans);
    t2=find(s1,s2,i,j+1,ans);
    ans[i][j]=(t1>t2)?t1:t2;
    return ans[i][j];
}
int main()
{
    char s1[10],s2[10];
    scanf("%s%s",s1,s2);
    n=strlen(s1),m=strlen(s2);
    int ans[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        ans[i][j]=0;
    }
    printf("%d",find(s1,s2,0,0,ans));
}
