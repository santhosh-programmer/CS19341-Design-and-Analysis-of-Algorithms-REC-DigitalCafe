// Write a C program to find the Nth term in the fibonacci series. 

#include<stdio.h>
int main()
{
    int n,a=-1,b=1,c=0;
    scanf("%d",&n);
    for(int i=0;i!=n+1;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    printf("%d",c);
}
