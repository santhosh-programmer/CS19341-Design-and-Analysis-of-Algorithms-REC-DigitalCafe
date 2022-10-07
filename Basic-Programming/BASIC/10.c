// Write a C program to find the reverse of the given integer?

#include<stdio.h>
int main()
{
    int n,rem,ans=0;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        ans=ans*10+rem;
        n/=10;
    }
    printf("%d",ans);
}
