// The program must accept two string values S1 and S2 as the input. 
// The program must find the absolute difference between the number of common characters and the number 
// of uncommon characters in the string values and print the value as the output.

// Boundary Condition(s):

// 1 <= Length of S1, Length of S2 <= 10^6

// Input Format:

// The first line contains S1
// The second line contains S2

// Output Format:

// The first line contains the positive integer value denoting the absolute difference
 
// Example Input/Output 1:

// Input:

// abcdxyza
// bcdxmnomm

// Output:

// 2



#include<stdio.h>
#include<string.h>
int find(int a[])
{
    int c=0;
    for(int i=0;i<26;i++)
    c+=a[i];
    return c;
}
int main()
{
    char s1[100],s2[100];
    scanf("%s%s",s1,s2);
    int u,c,total[26]={0},ans[26]={0};
    for(int i=0;i<strlen(s1);i++)
    {
        for(int j=0;j<strlen(s2);j++)
        {
            total[s1[i]-97]=1;
            total[s2[j]-97]=1;
            if(s1[i]==s2[j])
            {
                ans[s1[i]-97]=1;
                break;
            }
        }
    }
    c=find(ans);
    u=find(total)-c;
    if((u-c)<0)
    printf("%d",-1*(u-c));
    else
    printf("%d",u-c);
}
