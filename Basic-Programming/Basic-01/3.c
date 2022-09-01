// Write a C program to find the reverse of the given integer?

#include<stdio.h>
int main()
{
    int n,ans=0,rem;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        ans=ans*10+rem;
        n=n/10;
    }
    printf("%d",ans);
}
